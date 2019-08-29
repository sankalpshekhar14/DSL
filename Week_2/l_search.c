#include <stdio.h>
#include<stdlib.h>
int* search(int [],int *,int *,int *);
void main(){

	//Declaring variables	
	 
	int n,i,t;
	//Size Input
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	
	//Dynamic allocation
	int *a=(int*)calloc(n,sizeof(int));
	//Array Input
	for(i=0;i<n;i++){
		printf("Enter value for %d position\n",i+1);
		scanf("%d",&a[i]);
	}
	//Enter Target
	printf("Enter the number to be searched \n");
	scanf("%d",&t);
	//Function call
	int index;
	int *k=search(a,&n,&t,&index);
	//Print output
	if(*k==-1)
		printf("Not Found\n");
	else
		printf("Found at position %d \n",(*k)+1);

	//Deallocate Memory from heap
	free(a);
	a=NULL;
}
//Function Definition
int* search(int a[],int *n,int *t,int *index){

	int i;
	int m=*n;
	
	for(i=0;i<m;i++){
	
		if(a[i]==*t){
			*index=i;
			return index;
		}

	}
	*index=-1;
	return index;
}