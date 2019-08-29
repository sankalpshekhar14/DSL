#include<stdio.h>
#include<stdlib.h>
int main(){

	//Declaring Variables
	int i,j,r1,c1;
	int **a;
	
	//Matrix size input
	printf("Enter the dimensions of the matrix\n");
	scanf("%d%d",&r1,&c1);
	//Dynamic Allocation
	a=(int**)calloc(r1,sizeof(int*));
	for(i=0;i<r1;i+=){
		a[i]=(int*)calloc(c1,sizeof(int));
	}
	
	//Matrix Input
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("Enter the value for (%d,%d)\n",i,j);
			scanf("%d",((a+i)+j));
		}
	}
	//Matrix Display
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("Enter the value for (%d,%d)\n",i,j);
			scanf("%d",*(*(a+i)+j));
		}
	}
	//Deallocate Memory from heap
	free(a);
	a=NULL;
}

