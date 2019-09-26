#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

typedef struct{ int a[MAX_SIZE];
				int rear;
				int front;
			  }QUEUE;

void insert_by_priority(int a[MAX_SIZE])