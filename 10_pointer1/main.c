#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap (int *x, int *y) {
	
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}

int main(void) {
	
	//practice01 optional
	
	int i = 10;
	char c = 69;
	float f = 12.3;
	
	printf("i : %i %p \n", &i, &i);
	printf("c: %i %p \n", &c, &c);
	printf("f : %i %p \n", &f, &f);
	
	//practice02
	
	int i = 10;
	char c = 'a';
	int *iptr,*iptr2;
	char *cptr;
	
	iptr = &i;
	cptr = &c;
	iptr2 = iptr;
	
	printf("i : %p\n%p (size:%i)\n", iptr, &i, sizeof(iptr));
	printf("c : %p\n%p (size:%i)\n", cptr, &c, sizeof(cptr));
	printf("iptr2 : %p, %i\n", iptr2, *iptr2);


	//practice03
	
	int i = 256; //300으로 변경해서도 해보기
	int *pi = &i;
	char *pc = &i;
	printf("%i, %i, %i\n", i, *pi, *pc);
	
	//practice04
	
	int a = 3;
	int b = 5;
	swap(&a, &b);
	printf("a:%i, b:%i\n", a, b);
	
	
	//practice05 
	int i,sum,avg;
	int grade[5];
	int *ptr;
	
	ptr = grade;
	
	for (i=0;i<5;i++)
	{
		printf("input value[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("grade[%d] = %d\n", i, *(ptr+i));	
		sum += *(ptr+i); 
	}	
	
	avg = sum/5;
	printf(" \n average = %d",avg);
	
	return 0;
}
