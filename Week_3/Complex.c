#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct{
		int real;
		int imag;

}COMPLEX;

COMPLEX add(COMPLEX A, COMPLEX B){
	COMPLEX C;
	C.real=A.real+B.real;
	C.imag=A.imag+B.imag;
	return C;
}
COMPLEX subtract(COMPLEX A,COMPLEX B){
	COMPLEX C;
	C.real=abs(A.real-B.real);
	C.imag=abs(A.imag-B.imag);
	return C;
}
COMPLEX multiply(COMPLEX A, COMPLEX B){
	COMPLEX C;
	C.real=(A.real*B.real)-(A.imag*B.imag);
	C.imag=(A.real*B.imag)+(A.imag*B.real);
	return C;
}
void display(COMPLEX A){
	printf("%d +i%d\n",A.real,A.imag);
}
