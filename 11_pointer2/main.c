#include <stdio.h>
#include <stdlib.h>
//pratice05 +
char *proverb = "All that glisters is not gold.";

void setPointer(char **q)
{
	*q = proverb;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//practice01
/*
	char *pc;
	int *pi;
	double *pd;
	
	pc = (char *)10000;
	pi = (int *)10000;
	pd = (double *)10000;
	
	printf(" before ++ : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
		
	pc++;
	pi++;
	pd++;
	
	printf(" After ++ : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	//practice02 optional
	
	int i = 10;
	int *ptr = &i;
	
	printf("%i = %d, pi : %p\n", i, ptr);
	(*ptr)++;
	printf("%i = %d, pi : %p\n", i, ptr);
	*ptr++;
	printf("%i = %d, pi : %p\n", i, ptr);

	//practice03

	char buffer[8];
	double *pd;
	int *pi;
	
	pd = (double *)buffer;
	*pd = 3.14;
	printf("%f\n", *(double*)buffer );
	
	pi = (int *)buffer;
	*pi = 123;
	*(pi+1) = 456;
	printf("%d %d\n", *(int*)buffer, *((int*)buffer + 1) );


	//practice04
	
	int i = 100;
	int *p = &i;
	int **q = &p;
	
	*p = 200;
	printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
	**q = 300;
	printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
	
	//practice05
	//there is a function"setPointer" above  
	
	char *p = "zzz";
	setPointer(&p);
	printf("%s \n", p);
*/
	//practice06 optional
	
	//practice07 optional

	
	return 0;
}
