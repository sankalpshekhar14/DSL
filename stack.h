#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STACK_SIZE 80
typedef struct{
		char **a;
		int top;

}STACK;
int isStackFull(STACK S){
	if(S.top==MAX_STACK_SIZE-1){
		printf("Stack Overflow\n");
		return 1;
	}
	return 0;
}
void stackInit(STACK *S){
	S->top=-1;
	S->a=(char**)calloc(80,sizeof(char*));
	for(int i=0;i<80;i++){
		S->a[i]=(char*)malloc(80*sizeof(char));
	}
}
int isStackEmpty(STACK S){
	if(S.top==-1){
		printf("Stack Underflow\n");
		return 1;
	}
	return 0;
}
void push(STACK *S,char *ch){
	if(!isStackFull(*S))
		strcpy(S->a[++(S->top)],ch);
}
char* pop(STACK *S){
	if(!isStackEmpty(*S))
		return S->a[S->top--];
}
void display(STACK S){
	printf("Contents of stack:  ");
	if(!isStackEmpty(S)){
		while(S.top!=-1){
			printf("%s ",S.a[S.top--]);
		}
		printf("\n");	
	}
}