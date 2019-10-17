#include<stdio.h>
#include<stdlib.h>
#define COUNT 10

//tree pointer
typedef struct node* tree_pointer;

//tree structure
typedef struct node{
					int data;
					tree_pointer lchild,rchild;

}*NODE;
//create node
NODE createTree(){
	NODE temp;
	int e;
	printf("Enter data for current node(-1 for no data)\n");
	scanf("%d",&e);
	if(e==-1)
		return NULL;

	//Dynamic Memory Allocation
	temp= (NODE)malloc(sizeof(node));
	temp->data=e;

	printf("Enter left child of %d\n",e);
	temp->lchild=createTree();

	printf("Enter right child of %d\n",e);
	temp->rchild=createTree();

	return temp;

}

//recursive traversals
void recInorder(tree_pointer ptr){
	if(ptr){
		recInorder(ptr->lchild);
	    printf("%d ",ptr->data);
	    recInorder(ptr->rchild);
	}
	printf("\n");
}
void recPreorder(tree_pointer ptr){
	if(ptr){
		printf("%d ",ptr->data);
		recPreorder(ptr->lchild);
	    recPreorder(ptr->rchild);
	}
	printf("\n");
}
void recPostorder(tree_pointer ptr){
	if(ptr){
		recPreorder(ptr->lchild);
	    recPreorder(ptr->rchild);
	     printf("%d ",ptr->data);
	}
	printf("\n");
}
//Not my code
void printTree(tree_pointer root, int space) 
{ 
    // Base case 
    if (root == NULL) 
        return; 
  
    // Increase distance between levels 
    space += COUNT; 
  
    // Process right child first 
    printTree(root->rchild, space); 
  
    // Print current node after space 
    // count 
    printf("\n"); 
    for (int i = COUNT; i < space; i++) 
        printf(" "); 
    printf("%d\n", root->data); 
  
    // Process left child 
    printTree(root->lchild, space); 
} 
  

void displayTree(tree_pointer ptr){
	printTree(ptr, 0); 
}