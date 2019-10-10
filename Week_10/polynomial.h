#include<stdio.h>
#include<stdlib.h>

typedef struct poly{
		int coeff;
		int expon;
		struct poly* llink;
		struct poly* rlink;
}POLY;

typedef POLY* poly_pointer;

poly_pointer add(poly_pointer head,int n, int e){

	poly_pointer temp,last;
	temp=(poly_pointer)malloc(sizeof(POLY));
	temp->coeff=n;
	temp->expon=e;
	last=head->llink;
	temp->llink=last;
	last->rlink=temp;
	temp->rlink=head;
	head->llink=temp;
	return head;

}
poly_pointer polyAdd(poly_pointer h1, poly_pointer h2,poly_pointer h3){
	poly_pointer a,b;
	a=h1->rlink;
	b=h2->rlink;

	while(a!=h1 && b!=h2){
		if((a->expon)==(b->expon)){
			h3=add(h3,(a->coeff)+(b->coeff),a->expon);
			a=a->rlink;
			b=b->rlink;

		}
		else if((a->expon)>(b->expon)){
			h3=add(h3,a->coeff,a-<expon);
			a=a->rlink;
		}
		else{
			h3=add(h3,b->coeff,b-<expon);
			b=b->rlink;
		}
	}
	while(a!=h1){
		h3=add(h3,a->coeff,a-<expon);
			a=a->rlink;
	}
	while(b!=h2){
		h3=add(h3,b->coeff,b-<expon);
			b=b->rlink;
	}

	return h3;
}
poly_pointer polySub(poly_pointer h1, poly_pointer h2,poly_pointer h3){
	poly_pointer a,b;
	a=h1->rlink;
	b=h2->rlink;

	while(a!=h1 && b!=h2){
		if((a->expon)==(b->expon)){
			h3=add(h3,(a->coeff)-(b->coeff),a->expon);
			a=a->rlink;
			b=b->rlink;

		}
		else if((a->expon)>(b->expon)){
			h3=add(h3,a->coeff,a-<expon);
			a=a->rlink;
		}
		else{
			h3=add(h3,-b->coeff,b-<expon);
			b=b->rlink;
		}
	}
	while(a!=h1){
		h3=add(h3,a->coeff,a-<expon);
			a=a->rlink;
	}
	while(b!=h2){
		h3=add(h3,-b->coeff,b-<expon);
			b=b->rlink;
	}

	return h3;
}
/*poly_pointer polyMult(poly_pointer h1, poly_pointer h2,poly_pointer h3){
	poly_pointer a,b;
	a=h1->rlink;
	b=h2->rlink;

	while(a!=h1 && b!=h2){
		if((a->expon)==(b->expon)){
			h3=add(h3,(a->coeff)+(b->coeff),a->expon);
			a=a->rlink;
			b=b->rlink;

		}
		else if((a->expon)>(b->expon)){
			h3=add(h3,a->coeff,a-<expon);
			a=a->rlink;
		}
		else{
			h3=add(h3,b->coeff,b-<expon);
			b=b->rlink;
		}
	}
	while(a!=h1){
		h3=add(h3,a->coeff,a-<expon);
			a=a->rlink;
	}
	while(b!=h2){
		h3=add(h3,b->coeff,b-<expon);
			b=b->rlink;
	}

	return h3;
}*/

void displayPoly(poly_pointer h){
		poly_pointer temp=h->rlink;

		while(temp->rlink!=h){
			printf("%dX^%d +",temp->coeff,temp->expon);
			temp=temp->rlink;
		}
		printf("%dX^%d",temp->coeff,temp->expon);
		temp=temp->rlink;

}