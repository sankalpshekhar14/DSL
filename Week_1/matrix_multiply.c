#include<stdio.h>

void matrix_multiply(int a[][80],int r1,int c1,int b[][80],int r2,int c2);

int main(){

	//Declaring Variables
	int i,j,r1,c1,r2,c2;
	int a[80][80],b[80][80];
	
	//Matrix 1 input
	printf("Enter the dimensions of the first matrix(max 80X80)\n");
	scanf("%d%d",&r1,&c1);
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("Enter the value for (%d,%d)\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Matrix 2 input
	printf("Enter the dimensions of the second matrix(max 80X80)\n");
	scanf("%d%d",&r2,&c2);
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("Enter the value for (%d,%d)\n",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	//Function call
	matrix_multiply(a,r1,c1,b,r2,c2);
}

void matrix_multiply(int a[][80],int r1,int c1,int b[][80],int r2,int c2){
	
	//Declaring Variables
	int i,j,k;
	int c[80][80];
	
	//Condition Check	
	if(c1!=r2){
		printf("Matrix cannot be multiplied");
		return;	
	}

	//Product Computation	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			c[i][j]=0;
			for(k=0;k<c1;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	//Product Output
	printf("The Product of the two matrices is \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d  ",c[i][j]);
		}
	
		printf("\n");
	}
}

