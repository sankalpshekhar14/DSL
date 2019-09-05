#include"int_stack.h"
#include<string.h>
int isOperand(char ch){
	if((ch-'0')>=0&&(ch-'0')<=9)
		return 1;
	return 0;
}
void main(){int i,result;
	STACK S;
	int o1,o2;
	stackInit(&S);
	char a[80];
	printf("Enter prefix expression to be evaluated\n");
	gets(a);
	int l=strlen(a);
	for(i=l-1;i>=0;i--){
		if(isOperand(a[i]))
			push(&S,a[i]-'0');
		else{
			 o1=pop(&S);
			 o2=pop(&S);
			 switch(a[i]){
			 	
			 	case '+': push(&S, o1+o2);
	 					  break;
			  	case '-': push(&S,o1-o2);
			  				break;
  				case '*': push(&S,o1*o2);
  							break;
				case '/': push(&S,o1/o2);
							break;

				default:printf("No Match Found\n"); 
			}
		}
	}
	result=pop(&S);
	printf("The Result is %d\n",result);
 }