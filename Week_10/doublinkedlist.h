#include<stdio.h>
#include<stdlib.h>
typedef struct node{
			int data;
			struct node* llink;
			struct node* rlink;

}NODE;

typedef NODE* list_pointer;
//typedef struct node* list_pointer;

list_pointer ptr;
//ptr=(list_pointer)malloc(sizeof(NODE));

void addNode(int value,int flag){
	list_pointer temp,p;

	
	//Node Memory Allocation
	temp=(list_pointer)malloc(sizeof(NODE));
	
	if(ptr==NULL)
		{	ptr=temp;
			ptr->rlink=NULL;
			ptr->data=value;
			ptr->llink=NULL;
		}
	if(flag==0){
		p=ptr;
		while(p->rlink!=NULL){
			p=p->rlink;
		}
		p->rlink=temp;
		temp->llink=p;
		temp->data=value;
		temp->rlink=NULL;
	
}
else
{
	temp->rlink=ptr;
	temp->data=value;
	temp->llink=NULL;
	ptr->llink=temp;
	ptr=temp;
} 

}
int delNode(int flag){
	int d;
	if(ptr==NULL)
		return -1;

	list_pointer temp,p;
	p=ptr;
	if (flag==0){
	while(p->rlink!=NULL){
		p=p->rlink;
	}
	temp=p->llink;
	d=p->data;
	temp->rlink=NULL;
	free(p);
	return d;
}
if(flag==1){
	ptr=ptr->rlink;
	ptr->llink=NULL;
	d=p->data;
	return d;

}
}

void display(){
	list_pointer p;
	p=ptr;
	while(p->rlink!=NULL){
		printf("%d->",p->data);
		p=p->rlink;
	}
	printf("%d\n",p->data);
}
	
