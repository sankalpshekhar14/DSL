#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

typedef struct{
		int *a;
		int top1;
		int top2;

}DSTACK;
int isStackFull(DSTACK S){
	if(S.top1+1==S.top2){
		printf("Stack Overflow\n");
		return 1;
	}
	else
		
		return 0;
}

int isStackEmpty(DSTACK S,int i){
	if(!i){
		if(S.top1==-1){
			printf("Stack Underflow for Stack 1\n");
			return 1;
		}
		else 
			return 0;
	}
	else{
		if(S.top2==MAX_SIZE){
			printf("Stack Underflow for Stack 2\n");
			return 1;
		}
		else 
			return 0;
	}


}

void stackInit(DSTACK *S){
	S->top1=-1;
	S->top2=MAX_SIZE;
	S->a=(int*)calloc(MAX_SIZE,sizeof(int));
}
void push(DSTACK *S,int element,int i){
	if(!isStackFull(*S)){
			if(!i)
				S->a[++S->top1]=element;
			else
				S->a[--S->top2]=element;
	}

}
int pop(DSTACK *S,int i){
	int element;
	if(!isStackEmpty(*S,i)){
				if(!i)
					element=S->a[S->top1--];
				else
					element=S->a[S->top2++];


	}
	else
		return -1;
}
void display(DSTACK S,int i){
		printf("Contents of stack %d: ",i+1);
		if(!i)
			while(S.top1>-1)
				printf("%d ",S.a[S.top1--]);
		else
			while(S.top2<MAX_SIZE)
				printf("%d ",S.a[S.top2++]);
	printf("\n");

}

void main(){int i=0;
	int num;
	DSTACK S;
	stackInit(&S);
	while(i!=7){
		printf("Double Stack Program\n");
		printf("1. Push Stack 1\n");
		printf("2. Pop Stack 1\n");
		printf("3. Display Stack 1\n");
		printf("4. Push Stack 2\n");
		printf("5. Pop Stack 2\n");
		printf("6. Display Stack 2\n");
		printf("7. Exit\n");
		scanf("%d",&i);
		switch(i){
			case 1: printf("Enter number\n");
					scanf("%d",&num);
					push(&S,num,0);
					break;
			case 2: num=pop(&S,0);
					if(num!=-1)
					printf("Element popped: %d\n",num);
					break;
			case 3:display(S,0);
					break;
			case 4: printf("Enter number\n");
					scanf("%d",&num);
					push(&S,num,1);
					break;
			case 5: num=pop(&S,1);
					if(num!=-1)
					printf("Element popped: %d\n",num);
					break;
			case 6:display(S,1);
					break;


			default: exit(0);
		}

		

	}
}
