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
		scanf("%lf",&a[i]);
	}

	//Function call
	double* sum=add(a,&n);

	//print sum
	printf("The sum is %lf \n",*sum);

	//Deallocate Memory from heap
	free(a);
	a=NULL;

}

double* add(double a[],int *n){

	int i;
	int m=*n;
	double *sum;
	for(i=0;i<m;i++){
	
		*(sum)+=*(a+i);
	}
	a=NULL;
	
	return sum;
}


