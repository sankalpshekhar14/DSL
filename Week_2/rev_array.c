#include <stdio.h>
#include<stdlib.h>
void rev_array(int[],int *);
void main(){

	//Declaring variables	
	 
	int n,i;
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
	//Function Call
	rev_array(a,&n);
	//Display Array
	printf("Reversed array is\n");
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	//Deallocate Memory from heap
	free(a);
	a=NULL;
		
}
//Function Definiton
void rev_array(int a[],int *n){
	int *pWalk,*pStat;
	int temp;
	int m=*n;
	int i;
	
	pWalk=a;
	pStat=&a[m-1];

	for(i=0;i<=m/2;i++,pWalk++,pStat--){
		temp=*pWalk;
		*pWalk=*pStat;
		*pStat=temp;

	}
}		

	


