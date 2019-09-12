#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_QUEUE_SIZE 20

int i;
typedef struct{
		char **a;
		int front;
		int rear;

}QUEUE;

int isFull(QUEUE Q){
	if(Q.front==Q.rear)
		return 1;
	return 0;
}
int isEmpty(QUEUE Q){
	Q.rear=(Q.rear+1)%MAX_QUEUE_SIZE;
	if(Q.front==Q.rear)
		return 1;
	return 0;
}
void cqInit(QUEUE *Q,int n,int size){
		Q->a=(char**)calloc(n,sizeof(char*));
		for(i=0;i<n;i++){
			Q->a[i]=(char*)calloc(size,sizeof(char));
		}
		Q->front=-1;
		Q->rear=-1;
}

void insertcq(QUEUE *Q,char str[]){
	if(isFull(*Q)){
		printf("Queue is Full");
		return;
	}
	Q->rear=(Q->rear+1)%MAX_QUEUE_SIZE;
	strcpy(Q->a[Q->rear],str);	
}
char* deletecq(QUEUE *Q){
	if(isEmpty(*Q)){
		printf("Queue Empty");
		return "NULL";
	}

	Q->front=(Q->front+1)%MAX_QUEUE_SIZE;
	return Q->a[Q->front];
}

void displaycq(QUEUE Q){
	if(!isEmpty(Q)){
		for(i=Q.front;i!=Q.rear;i=(i+1)%MAX_QUEUE_SIZE)
			printf("%s",Q.a[i]);

	}

}