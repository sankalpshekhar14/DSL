#include<stdio.h>

int large_2(int[],int n);

int main(){

	//Declaring Variables
	int i,n,m;
	int a[80];
	
	printf("Enter the size of the array(max 80)");
	scanf("%d",&n);
	
	//Array Input
	for(i=0;i<n;i++){
		printf("Enter value for %d position\n",i+1);
		scanf("%d",&a[i]);
	}
	//Function call
	m=large_2(a,n);
	
	//Final Output
	printf("The second largest number is %d \n",m);
}

int large_2(int a[],int n){

	int i,max,m;
	max=a[0];
	m=-1;
	for(i=0;i<n;i++){
		if(a[i]>max)
			max=a[i];
		else if(a[i]>m && a[i]<max)
			m=a[i];
	}
	
	return m;
}
	
