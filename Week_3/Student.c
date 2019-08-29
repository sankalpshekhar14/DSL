#include<stdio.h>
#include<stdlib.h>
//Structure Definition
typedef struct{
		char name[20];
		int rollNum;
		float CGPA;

}STUDENT;
//read() Definition
void read(STUDENT *a){
	scanf("%s",a->name);
	scanf("%d",&a->rollNum);
	scanf("%f",&a->CGPA);
}
//display() Definition
void display(STUDENT a){
	printf("\t%s %d %0.2f \n ",a.name,a.rollNum,a.CGPA);


}
//sort() Definition
void sort(STUDENT *a,int n){
	int i,j;
	STUDENT temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[i].rollNum>a[i+1].rollNum){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}

	}
}
void main(){
	//Declaring Variables
	int i,n;
	STUDENT *a;
	//Input size of the dynamic array
	printf("Enter the number of students\n");
	scanf("%d",&n);
	//Dynamic allocation
	a=(STUDENT*)calloc(n,sizeof(STUDENT));
	//Read Values
	for(i=0;i<n;i++){
		read(&a[i]);
	}
	//sort() function call
	sort(a,n);
	//Display values
	for(i=0;i<n;i++){
		display(a[i]);
	}

}