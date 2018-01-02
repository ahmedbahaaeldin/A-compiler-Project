%{
#include <stdlib.h>
#include "calc3.h"
#include "y.tab.h"
void yyerror(char *);
%}

%%

[a-z]       { 
                yylval.sIndex = *yytext - 'a';
                return VARIABLE;
            }

\'[a-zA-Z0-9]\'		{ 
                yylval.sIndex = yytext[1];
                return CHR;
            }
			
0           {
                yylval.iValue = atoi(yytext);
                return INTEGER;
            }

[1-9][0-9]* {
                yylval.iValue = atoi(yytext);
                return INTEGER;
            }

[0-9]+\.[0-9]+ {
                yylval.fValue = atof(yytext);
                return FLT;
               }


">="            return GE;
"<="            return LE;
"=="            return EQlog;
"!="            return NE;

"while"         return WHILE;

"for"           return FOR;

"switch"        return SWITCH;
"case"          return CASE;
":"             return COLON;
"break"         return BREAK;
"default"       return DEFAULT; 
"do"            return DO;

"if"            return IF;
"else"          return ELSE;
"cout"          return PRINT;
";"				return SEMICOLON;
"<<"			return PRINTTHIS;
">"             return GT;
"<"             return LT;
"="				return EQ;
"||"            return OR;
"&&"            return AND;

"bool "         return BOOLEAN;
"false"         return FALSE;
"true"          return TRUE;

"int "			return INT;
"float "		return FLOAT;
"double "		return DOUBLE;
"char "			return CHAR;

"const "		return CONST;
"+"				return PLUS;
"-"				return MINUS;
"*"				return MULTIPLY;
"/"				return DIVIDE;
"("				return LBRACKET;
")"				return RBRACKET;
"{"				return LBRACES;
"}"				return RBRACES;
","				return COMMA;
"'"				return SINGLEQUOTE;
" "				;
"\t"			;
[\n]+        ;       /* ignore  */

.               yyerror("Unknown character");
%%
int yywrap(void) {
    return 1;
}
