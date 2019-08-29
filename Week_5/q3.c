#include"char_stack.h"
#include<string.h>

void main(){
	char a[MAX_STACK_SIZE];
	STACK S;
	stackInit(&S);
	printf("Enter the String\n");
	scanf("%s",a);
	int i=0;
	int l=strlen(a);
	while(i<l){
		push(&S,a[i++]);
	}
	char b[MAX_STACK_SIZE];
	i=0;
	while(S.top>=0){
		b[i++]=pop(&S);
	}
	if(!strcmp(b,a))
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");
}