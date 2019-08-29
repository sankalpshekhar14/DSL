#include<stdio.h>

int Lsearch(int[],int,int);

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
	
	//Element Input
	printf("Enter the element to be searched for\n");
	scanf("%d",&m);
	//Function Call
	if(Lsearch(a,n,m))
		printf("Element found");

	else
		printf("Element not found");
}

int Lsearch(int a[],int n,int m){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==m)
			return 1;
	}

	return 0;
}


		
		
