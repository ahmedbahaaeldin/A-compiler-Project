#include <stdio.h>
#include "calc3.h"
#include "y.tab.h"

static int lbl;
int RegCount = 0;

int RBCALL=0;
int bc1=0;
int el2=0;
int wh1=0;
int dol1=0;
int check=0;

void ResetCount()
{
	RegCount = 0;
}
int ex(nodeType *p, int jmpTo, int rgid , int currentLabel) {
    int lbl1, lbl2;

    if (!p) return 0;
    switch(p->type) {
    case typeCon:   
		p->con.name = RegCount;
		RegCount++;
		if (p->con.value != -1) {
			printf("\tmov R%d,%d\n", p->con.name, p->con.value);
		}
		else if (p->con.fvalue != -1) {
			printf("\tmov R%d,%f\n", p->con.name, p->con.fvalue);
		}
		else if (p->con.cvalue != -1) {
			printf("\tmov R%d,'%c'\n", p->con.name, p->con.cvalue);
		}
		else if(p->con.bvalue != -1) {
			printf("\tmov R%d,%d\n", p->con.name, p->con.bvalue);
		}
        
        break;
    case typeId: 
		p->con.name = RegCount;
		RegCount++;
        printf("\tmov R%d,%c\n",p->con.name, p->id.i + 'a'); 
        break;
    case typeOpr:
        switch(p->opr.oper) {
			
		case SWITCH:
            
			lbl2 = lbl++;
			ex(p->opr.op[0],0,0,0);
			ex(p->opr.op[1],lbl2, (p->opr.op[0])->con.name , lbl2);
			printf("Default \n");
			ex(p->opr.op[2],0,0,0);
	     	printf("L%03d:\n", lbl2);
			break;
			
		case CASE:
            
			if(p->opr.nops==2)
			{
				int exitLabel=jmpTo;
				int nextLabel=currentLabel+1;
				
				ex(p->opr.op[0],0,0,0);
				printf("\tcompEQ R%d,R%d \n", (p->opr.op[0])->con.name, rgid);
				printf("\tjz\tL%03d\n",nextLabel,0);
				ex(p->opr.op[1],0,0,0);
				printf("\tjmp L%03d\n", exitLabel);
				printf("L%03d\n", nextLabel);
			}
			else if(p->opr.nops==3)
			{
				int exitLabel=jmpTo;
				int nextLabel=currentLabel+1;
				
				ex(p->opr.op[0],0,0,0);
				printf("\tcompEQ R%d,R%d \n", (p->opr.op[0])->con.name, rgid);
				printf("\tjz\tL%03d\n",nextLabel,0);
				ex(p->opr.op[1],0,0,0);
				printf("\tjmp L%03d\n", exitLabel);
				printf("L%03d \n", nextLabel);
				
				ex(p->opr.op[2],exitLabel,rgid,nextLabel);
			}
			break;	
			
		case FOR:
            printf("for loop\n");
			ex(p->opr.op[0],0,0,0);
			printf("L%03d:\n", lbl1 = lbl++);
			ex(p->opr.op[1],0,0,0);
			printf("\tjz\tL%03d\n", lbl2 = lbl++);
			ex(p->opr.op[3],0,0,0);
			ex(p->opr.op[2],0,0,0);
			
			printf("\tjmp\tL%03d\n", lbl1);
            printf("L%03d:\n", lbl2);
			
            break;
        case WHILE:
            printf("L%03d:\n", lbl1 = lbl++);
            ex(p->opr.op[0],0,0,0);
            printf("\tjz\tL%03d\n", lbl2 = lbl++);
            ex(p->opr.op[1],0,0,0);
            printf("\tjmp\tL%03d\n", lbl1);
            printf("L%03d:\n", lbl2);
            break;
		case DO:
			printf("L%03d:\n", lbl1 = lbl++);
			ex(p->opr.op[0], 0,0,0);
			ex(p->opr.op[1], 0,0,0);
			printf("\tjnz\tL%03d\n", lbl1);
			break;	
        case IF:
            ex(p->opr.op[0],0,0,0);
            if (p->opr.nops > 2) {
                /* if else */
                printf("\tjz\tL%03d\n", lbl1 = lbl++);
                ex(p->opr.op[1],0,0,0);
                printf("\tjmp\tL%03d\n", lbl2 = lbl++);
                printf("L%03d:\n", lbl1);
                ex(p->opr.op[2],0,0,0);
                printf("L%03d:\n", lbl2);
            } else {
                /* if */
					printf("\tjz L%03d\n", lbl1 = lbl++);
					ex(p->opr.op[1],0,0,0);
					printf("L%03d:\n", lbl1);
            }
            break;
        case PRINT:     
            ex(p->opr.op[0],0,0,0);
            printf("\tprint\n");
            break;
        case EQ:       
            ex(p->opr.op[1],0,0,0);
			if (p->opr.op[1]->type == typeCon || p->opr.op[1]->type == typeId) {
				printf("\tmov %c,R%d \n", p->opr.op[0]->id.i + 'a', (p->opr.op[1]->con.name));
			}
			else {
				printf("\tmov %c,R%d \n", p->opr.op[0]->id.i + 'a', (p->opr.op[1]->opr.op[0]->con.name));
			}
			
			//RegCount = 0;
            break;
        case UMINUS:    
            ex(p->opr.op[0],0,0,0);
            printf("\tneg\n");
            break;
		case SEMICOLON:
		  ex(p->opr.op[0],0,0,0);
		  ex(p->opr.op[1],0,0,0);
			break;
		case CONSTi:
			ex(p->opr.op[1],0,0,0);
			printf("\tmov %c,R%d \n", p->opr.op[0]->id.i + 'a', (p->opr.op[1])->con.name);
			RegCount = 0;
			break;
			
		case CONSTf:
			break;
		case CONSTc:
			break;
		case INT:
			break;
		case FLOAT:
			break;
		case DOUBLE:
			break;
		case CHAR:
			break;
		case BOOLEAN:
			break;
		case CONSTb:
			ex(p->opr.op[1],0,0,0);
			printf("\tmov %c,R%d \n", p->opr.op[0]->id.i + 'a', (p->opr.op[1])->con.name);
			RegCount = 0;
			break;
        default:

            ex(p->opr.op[0],0,0,0);
            ex(p->opr.op[1],0,0,0);
			if (p->opr.op[0]->type == typeCon || p->opr.op[0]->type == typeId) {
				//p->con.name = p->opr.op[0]->con.name;
			}
			else {
				p->opr.op[0]->con.name = p->opr.op[0]->opr.op[0]->con.name;
			}
			if (p->opr.op[1]) {
				if (p->opr.op[1]->type == typeCon || p->opr.op[1]->type == typeId) {
				//	p->con.name = p->opr.op[0]->con.name;
				}
				else {
					p->opr.op[1]->con.name = p->opr.op[1]->opr.op[0]->con.name;
				}
			}
            switch(p->opr.oper) {
            case PLUS:   
				
				printf("\tadd R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);
				
				break;

            case MINUS:   
				printf("\tsub R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);
				break;

            case MULTIPLY:
				printf("\tmul R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);
				break;

            case DIVIDE:
				printf("\tdiv R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);
				break;

			case AND:
				printf("\tAND R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);
				//printf("\tmov R%d,R%d \n", p->con.name, (p->opr.op[0])->con.name);
				break;

			case OR:
				printf("\tOR R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);
				//printf("\tmov R%d,R%d \n", p->con.name, (p->opr.op[0])->con.name);
				break;

			case LT:

				printf("\tcompLT R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);

				break;
			case GT:
				printf("\tcompGT R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);

				break;
			case GE:
				printf("\tcompGE R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);

				break;
			case LE:
				printf("\tcompLE R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);

				break;
			case NE:
				printf("\tcompNE R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);

				break;
			case EQlog:
				printf("\tcompEQ R%d,R%d \n", (p->opr.op[0])->con.name, (p->opr.op[1])->con.name);

				break;
            }
        }
		
    }
    return 0;
}
