#include"stack.h"

void main(){ STACK S;
	stackInit(&S);
	char str[]="Data Structures and Applications";
	int n,i,j;
	char a[80];

	n=strlen(str);
	j=0;
	for(i=0;i<n;i++){
		if(str[i]==' '||i==n-1){
			a[j]='\0';
			push(&S,a);
			j=0;
		}
		else{
			a[j]=str[i];
			j++;
		}
	}
		display(S);
}
