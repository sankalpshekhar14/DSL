#include "char_stack.h"
void main(){STACK S;
	stackInit(&S);
	char ch;
	int i=0;


	while(i!=4){
		printf("Press 1 to Push, 2 to Pop, 3 to display, 4 to exit\n");
	  	scanf("%d",&i);
	
		
		switch(i){
			case 1:
			{ scanf(" %c",&ch);// scanf %c works with space  
					push(&S,ch);
					break;
			}
			case 2:ch=pop(&S);
					break;
			case 3:display(S);
					break;
			case 4: exit(0);

			default: printf("Wrong Choice\n");

		}

	}
}