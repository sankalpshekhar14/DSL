#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 80
typedef struct{
		char a[MAX_STACK_SIZE];
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
}
int isStackEmpty(STACK S){
	if(S.top==-1){
		printf("Stack Underflow\n");
		return 1;
	}
	return 0;
}
void push(STACK *S,char n){
	if(!isStackFull(*S))
		S->a[++(S->top)]=n;
}
char pop(STACK *S){
	if(!isStackEmpty(*S))
		return S->a[S->top--];
}
void display(STACK S){
	printf("Contents of stack:  ");
	if(!isStackEmpty(S)){
		while(S.top!=-1){
			printf("%c ",S.a[S.top--]);
		}
		printf("\n");	
	}
}