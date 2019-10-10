#include<stdio.h>
#include<stdlib.h>
typedef struct Node_pointer Node*;
typedef struct{
		int data;
		Node_pointer link;

	}Node;

void createNode(Node_pointer* ptr,int data){
		Node_pointer temp=*ptr;
		Node_pointer b;
		b=(Node_pointer)malloc(sizeof(Node));
		while((*ptr)->link)
			{(*ptr)=(*ptr)->link;}
		
		(*ptr)->link=b;
		b->link=NULL;
		b->data=data;

		*ptr=temp;
		


}

void deleteNode(Node_pointer *ptr,int data){
		Node_pointer temp=*ptr;
		while((*ptr)->data!=data||(*ptr){
			temp2=*ptr;
			(*ptr)=(*ptr)->link;	
		}
		temp2->link=(*ptr)->link



