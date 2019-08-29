#include<stdio.h>
#include<string.h>
int isPalin(char[],int);
void main(){
	char a[80];
	int i,l;
	printf("Enter the string\n");
	scanf("%s",a);
	if(isPalin(a,0))
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");
}
int isPalin(char a[],int i){
	int l=strlen(a);
	if(a[i]!=a[l-1-i])
		return 0;
	else if(i==l/2)
		return 1;
	else
		return isPalin(a,i+1);
}