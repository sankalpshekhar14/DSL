#include<stdio.h>
#include<stdlib.h>

void main(){
//Declaring Variables
	int rowNum,colNum,i,j;
//Declaring Pointer to Pointer
	int **table;
//Input Row Size
	printf("Enter the number of rows\n");
	scanf("%d",&rowNum);
//Dynamic Allocation for pointer rows
	table=(int**)calloc(rowNum+1,sizeof(int*));
//Dynamic allocation of columns
	for(i=0;i<rowNum;i++){
		printf("Enter the number of elements for row %d\n",i+1);
		scanf("%d",&colNum);
		table[i]=(int*)calloc(colNum+1,sizeof(int));
//Input Data
		for(j=1;j<=colNum;j++){
			scanf("%d",(*(table+i)+j)); //Using Deref op
		}
//Initializing number of elements of row to first element of row
		table[i][0]=colNum;
	}
//Null assigned to last row pointer
	table[i]=NULL;

//Display data
	for(i=0;i<rowNum;i++){
		for(j=1;j<=table[i][0];j++){
			printf("%d ",*(*(table+i)+j));
		}
		printf("\n");
	}

//Deallocattion of memory from heap
for(i=0;i<rowNum;i++){
	free(table[i]);
}
free(table);
}

		