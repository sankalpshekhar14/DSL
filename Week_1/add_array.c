#include<stdio.h>
#include<stdlib.h>

double* add(double[],int*); 

int main(){

	//Declaring variables	 
	int n,i;
	//Size Input
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	
	//Dynamic allocation
	double *a=(double*)calloc(n,sizeof(double));
	//Array Input
	for(i=0;i<n;i++){
		printf("Enter value for %d position\n",i+1);
		scanf("%d",&a[i]);
	}

	//Function call
	double* sum=add(a,&n);

	printf("The sum is %lf \n",*sum);

}

double* add(double a[],int *n){

	int i;
	int m=*n;
	double *sum=NULL;
	for(i=0;i<n;i++){
	
		*sum=*sum+a[i];
	}
	
	return sum;
}


