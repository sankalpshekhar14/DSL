#include "doublinkedlist.h"

void main(){
		int i=0;
		int n;
		//Interface loop
		while(i!=6){
			printf("Press 1 to add back, 2 to add front, 3 to delete back, 4 to delete front,5 to display,6 to exit \n");
			scanf("%d",&i);
			switch(i){
				case 1:scanf("%d",&n);
					   addNode(n,0);
					   break;
			   case 2:scanf("%d",&n);
					   addNode(n,1);
					   break;
			   	case 3: n=delNode(0);
			   			if(n!=-1)
			   				printf("Deleted node is %d\n",n);
		   				break;
   				case 4: n=delNode(1);
			   			if(n!=-1)
			   				printf("Deleted node is %d\n",n);
		   				break;
   				case 5:display();
   						break;
				case 6:exit(0); 
			}
		}
}

