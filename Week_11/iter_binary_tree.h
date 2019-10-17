#include<stdio.h>
#include<stdlib.h>

//tree pointer
typedef struct node* tree_pointer;

//tree structure
typedef struct node{
					int data;
					tree_pointer lchild,rchild;

}*NODE;
//create node
NODE icreateTree(){
	NODE temp,temp2;
	int e;
	int flag=0;

		while(flag!=4){
			printf("Select Options\n");
			printf("1 for adding first node, 2 for left child, 3 for right child, 4 to exit,-1 to go back to the above node");
			scanf("%d",&flag);
			switch(flag){

				case 1: printf("Enter data for current node(-1 for no data)\n");
						scanf("%d",&e);
						if(e==-1)
							temp=NULL;
						temp=(NODE)malloc(sizeof(node));
						temp->data=e;
						temp->lchild=NULL;
						temp->rchild=NULL;
						temp2=temp;
						break;
				
				case 2: printf("Enter data for current node(-1 for no data)\n");
						scanf("%d",&e);
						if(e==-1)
							temp->lchild=NULL;
						
						temp->lchild=(NODE)malloc(sizeof(node));
						(temp->lchild)->data=e;
						temp->lchil
				
				case 3:// Rchild
				case 4://exit
				case -1://revert to above node

				default: printf("Wrong choice,try again\n");
			}
		}
}