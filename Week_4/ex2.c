#include<stdio.h>
#include<string.h>

void copy(char[],char[],int,int);
void main(){
	fflush(stdin);
	char str[80];
	char str2[80];
	printf("Enter the string to be copied\n");
	scanf("%[^\n]s",str);
	copy(str,str2,strlen(str),0);
	printf("Copied string is %s\n",str2);
	
}
void copy(char a[],char str[],int l,int i){
	if(i==l)
		return;
	else {
		str[i]=a[i];
		copy(a,str,l,i+1);
	} 
	
		
	 
		
}
