#include<stdio.h>
int moves;
void Hanoi(int,char,char,char);
void main(){int n;
	printf("Enter the number of disks to be kept on tower A\n");
	scanf("%d",&n);
	Hanoi(n,'A','C','B');
	printf("%d\n",moves);

