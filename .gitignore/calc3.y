%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "calc3.h"

/* prototypes */
nodeType *opr(int oper, int nops, ...);
nodeType *id(int i);
nodeType *con(int value);
nodeType *conf(float value);
void ResetCount();

nodeType *conc(char value);
nodeType *conb(int value);
void freeNode(nodeType *p);
int ex(nodeType *p, int jmpTo , int rgid, int currentLabel);
int yylex(void);

void insert(int type1);
void look(int scopic1);
void look1(int tempvar);

void yyerror(char *s);
                  
int agdeed[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int isdeclared=0,i=0,type[100],j=0,error_flag=0;
int symbol[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int temp=0;
int scopic=0;
%}

%union {
    int iValue;                 /* integer value */
	float fValue;
    char sIndex;                /* symbol table index */
    nodeType *nPtr;             /* node pointer */
};

%token <iValue> INTEGER CHR BOOL FALSE TRUE
%token <fValue> FLT
%token <sIndex> VARIABLE
%token WHILE IF PRINT FOR SWITCH CASE DO
%token SEMICOLON PRINTTHIS SINGLEQUOTE EQ OR AND BOOLEAN COMMA CONST CONSTi CONSTf CONSTc CONSTb INT FLOAT DOUBLE CHAR LBRACKET RBRACKET LBRACES RBRACES COLON BREAK DEFAULT



%nonassoc IFX
%nonassoc ELSE

%left AND OR
%left GE LE EQlog NE GT LT
%left PLUS MINUS
%left MULTIPLY DIVIDE
%nonassoc UMINUS

%type <nPtr> stmt expr stmt_list Vars INT FLOAT DOUBLE CHAR BOOLEAN arexpr loexpr blexpr declassign declassign2 cases

%%

program:
        function                { exit(0); }
        ;

function:
          function stmt         { ex($2,0,0,0);ResetCount(); freeNode($2); printf("finish\n");}
        | /* NULL */
        ;

stmt:
          SEMICOLON                            { $$ = opr(SEMICOLON, 2, NULL, NULL); }
        | expr SEMICOLON                       { $$ = $1; }
        | PRINT expr SEMICOLON                 { $$ = opr(PRINT, 1, $2); }
        | VARIABLE EQ expr SEMICOLON           { temp=$1;look1(temp); $$ = opr(EQ, 2, id($1), $3);  }
        | WHILE LBRACKET expr RBRACKET stmt        { $$ = opr(WHILE, 2, $3, $5); }
		
        | IF LBRACKET expr RBRACKET stmt %prec IFX { $$ = opr(IF, 2, $3, $5); }
        | IF LBRACKET expr RBRACKET stmt ELSE stmt { $$ = opr(IF, 3, $3, $5, $7); }
		
		| LBRACES RBRACES {$$=opr(SEMICOLON,2,NULL,NULL);}
        | openB stmt_list closeB              { $$ = $2;  }
		| INT  Vars SEMICOLON     				 { $$ = opr(INT, 1, $2);insert(0);}
		| INT  VARIABLE EQ expr SEMICOLON     	 { printf(" declaration of type integer\n"); $$ = opr(EQ, 2, id($2), $4); insert(0) ; }
		| CONST INT VARIABLE EQ INTEGER SEMICOLON{ printf(" declaration of type const integer\n");
			$$ = opr(CONSTi, 2, id($3),con($5)); }
        | FLOAT Vars SEMICOLON          		 { printf(" declaration of type FLOAT\n"); $$ = opr(FLOAT, 1, $2); }
		| FLOAT  VARIABLE EQ expr SEMICOLON      { printf(" declaration of type integer\n");temp=$2;insert(1); $$ = opr(EQ, 2, id($2), $4); }
		| CONST FLOAT VARIABLE EQ FLT SEMICOLON  { printf(" declaration of type const FLOAT\n");
			$$ = opr(CONSTf, 2, id(3),con($5)); }
        | CHAR  Vars SEMICOLON           		 { printf(" declaration of type CHAR\n");$$ = opr(CHAR, 1, $2); }
		| CONST CHAR VARIABLE EQ expr SEMICOLON  { printf(" declaration of type const CHAR\n");$$ = opr(CONSTc, 2, id(3),$5); temp=$3; insert(2); }
		
		| BOOLEAN Vars SEMICOLON          		 { printf(" declaration of type BOOL\n"); $$ = opr(BOOLEAN, 1, $2); }
		| BOOLEAN VARIABLE EQ expr SEMICOLON     { printf(" declaration of type BOOL\n"); $$ = opr(EQ, 2, id($2), $4);temp=$2;insert(3); }
		| CONST BOOLEAN VARIABLE EQ FALSE SEMICOLON{ printf(" declaration of type const BOOL\n");
			$$ = opr(CONSTb, 2, id($3),conb(0)); }
		| CONST BOOLEAN VARIABLE EQ TRUE SEMICOLON{ printf(" declaration of type const BOOL\n");
			$$ = opr(CONSTb, 2, id($3),conb(1)); }
			
		| FOR LBRACKET declassign blexpr SEMICOLON declassign2 RBRACKET stmt  {$$ = opr(FOR, 4, $3, $4, $6, $8);}
		
		
		| DO LBRACES stmt_list RBRACES WHILE LBRACKET expr RBRACKET { $$ = opr(DO, 2, $3, $7); }
		
		
		| SWITCH LBRACKET VARIABLE RBRACKET LBRACES cases DEFAULT COLON stmt RBRACES    { printf(" SWITCH \n") ;$$ = opr(SWITCH, 3, id($3), $6, $9);}
		
        ;
cases:
		  CASE expr COLON stmt BREAK SEMICOLON    	 {  $$ = opr(CASE, 2, $2, $4); }
		| CASE expr COLON stmt BREAK SEMICOLON cases           {  $$ = opr(CASE, 3, $2, $4 , $7); }
		
		;	

openB:
LBRACES {scopic++;}
|openB;
closeB:
RBRACES {printf("right");look(scopic);scopic--;}
|closeB;

		
		
declassign:
		  INT  VARIABLE EQ arexpr SEMICOLON     	 {  $$ = opr(EQ, 2, id($2), $4);insert(0); }
		| FLOAT  VARIABLE EQ arexpr SEMICOLON      {  $$ = opr(EQ, 2, id($2), $4);insert(1);}
		;	
declassign2:
		   VARIABLE EQ arexpr      	 {  $$ = opr(EQ, 2, id($1), $3); }
		;			

blexpr: 
		  loexpr
		| blexpr AND blexpr			{ $$ = opr(AND, 2, $1, $3); }
		| blexpr OR blexpr		{ $$ = opr(OR, 2, $1, $3); }
		| LBRACKET blexpr RBRACKET  { $$ = opr(RBRACKET, 1, $2);}
		;
		
loexpr:
		  arexpr LT arexpr         { $$ = opr(LT, 2, $1, $3); }
        | arexpr GT arexpr         { $$ = opr(GT, 2, $1, $3); }
        | arexpr GE arexpr          { $$ = opr(GE, 2, $1, $3); }
        | arexpr LE arexpr          { $$ = opr(LE, 2, $1, $3); }
        | arexpr NE arexpr          { $$ = opr(NE, 2, $1, $3); }
        | arexpr EQlog arexpr          { $$ = opr(EQlog, 2, $1, $3); }
		;
		
arexpr:
          INTEGER               { $$ = con($1); }
        | VARIABLE              {$$ = id($1); }
        | MINUS arexpr %prec UMINUS { $$ = opr(UMINUS, 1, $2); }
        | arexpr PLUS arexpr         { $$ = opr(PLUS, 2, $1, $3); }
        | arexpr MINUS arexpr         { $$ = opr(MINUS, 2, $1, $3); }
        | arexpr MULTIPLY arexpr         { $$ = opr(MULTIPLY, 2, $1, $3); }
        | arexpr DIVIDE arexpr         { $$ = opr(DIVIDE, 2, $1, $3); }
        | LBRACKET arexpr RBRACKET          { $$ = $2; }
        ;		
		
		
stmt_list:
          stmt                  { $$ = $1; }
        | stmt_list stmt        { $$ = opr(SEMICOLON, 2, $1, $2); }
        ;
		
	

expr:
		  FLT					{ $$ = conf($1); }
		| INTEGER               { $$ = con($1); }
		| CHR					{ $$ = conc($1); }
		
		| FALSE                 { $$ = conb(0); }
		| TRUE                  { $$ = conb(1); }
		| expr AND expr         { $$ = opr(AND, 2, $1, $3); }
		| expr OR expr          { $$ = opr(OR, 2, $1, $3); }
		
        | VARIABLE              { $$ = id($1); }
        | MINUS expr %prec UMINUS { $$ = opr(UMINUS, 1, $2); }
        | expr PLUS expr         { $$ = opr(PLUS, 2, $1, $3); }
        | expr MINUS expr         { $$ = opr(MINUS, 2, $1, $3); }
        | expr MULTIPLY expr         { $$ = opr(MULTIPLY, 2, $1, $3); }
        | expr DIVIDE expr         { $$ = opr(DIVIDE, 2, $1, $3); }
        | expr LT expr         { $$ = opr(LT, 2, $1, $3); }
        | expr GT expr         { $$ = opr(GT, 2, $1, $3); }
        | expr GE expr          { $$ = opr(GE, 2, $1, $3); }
        | expr LE expr          { $$ = opr(LE, 2, $1, $3); }
        | expr NE expr          { $$ = opr(NE, 2, $1, $3); }
        | expr EQlog expr          { $$ = opr(EQlog, 2, $1, $3); }
        | LBRACKET expr RBRACKET          { $$ = $2; }
        ;

Vars:
          VARIABLE COMMA Vars                 { printf(",VAR"); $$ = opr(COMMA, 2, id($1), $3); }
        | VARIABLE                            { printf("VAR"); $$ = id($1);temp=$1; }
        ;
		
%%

nodeType *con(int value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.value = value;
	p->con.name = -1;
	p->con.fvalue =-1;
	p->con.cvalue =-1;
	p->con.bvalue=-1;

    return p;
}
nodeType *conf(float value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.fvalue = value;
	p->con.name = -1;
	p->con.value =-1;
	p->con.cvalue =-1;
	p->con.bvalue=-1;

    return p;
}
nodeType *conc(char value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.cvalue = value;
	p->con.name = -1;
	p->con.fvalue =-1;
	p->con.value =-1;
	p->con.bvalue=-1;

    return p;
}
nodeType *conb(int value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.cvalue = -1;
	p->con.name = -1;
	p->con.fvalue =-1;
	p->con.value =-1;
	p->con.bvalue=value;

    return p;
}
nodeType *id(int i) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeId;
    p->id.i = i;

    return p;
}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = malloc(sizeof(nodeType) + (nops-1) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

/*void freeNode(nodeType *p) {
    int i;

    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}*/

void freeNode(nodeType *p) {
    int i;
//   printf("freeing1\n");
    if (!p) return;
//	printf("freeing2\n");	
    if (p->type == typeOpr) {
	
//	printf("freeing3\n");
        for (i = 0; i < p->opr.nops-1; i++)
		{
//		    printf("freeing4\n");
            freeNode(p->opr.op[i]);
//			printf("freeing5\n");
		}
    }
//	printf("freeing6\n");

    free (p);
//	printf("freeing end\n");
}

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
	
	error_flag=1;
}

int main(void) {
    yyparse();
	
	if(error_flag==0)
for(j=0;j<100;j++)
{
if(type[j]==0)
printf(" INT - ");
if(type[j]==1)
printf(" FLOAT - ");
if(type[j]==2)
printf(" DOUBLE - ");
if(type[j]==3)
printf(" CHAR - ");
printf(" %s\n",symbol[j]);
}

	
	
    return 0;
}
void insert(int type1)
{
isdeclared=0;
printf("%d",temp);
printf("%d",type1);
for(j=0;j<26;j++)
{
	if(temp==symbol[j])
	{
		isdeclared=1;
		
		printf("REDECLARATION OF %d\n",temp);
		return;
	
 }
	
}
if(isdeclared==0)
{
for(i=0;i<26;i++)
if(symbol[i]==-1)
{

symbol[i]=temp;
type[i]=type1;
agdeed[i]=scopic;
break;
}

}
}
void look(int scopic1)
{

for(i=0;i<26;i++)
if(agdeed[i]==scopic1)
{
symbol[i]=-1;
agdeed[i]=-1;
}


}
void look1(int tempvar)
{

for(i=0;i<26;i++)
{
	if(tempvar==symbol[i])
	{
		isdeclared=1;
		return;
		
	}
}
printf("UNDECLARED %d\n",tempvar);

}
