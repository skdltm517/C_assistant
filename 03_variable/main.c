#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//practice01
	printf("Hello Sookmyung EE!\n");
	
	//practice02
	char a;
	int b;
	float c;
	double d;
	
	printf("bytes of char : %d\n", sizeof(a));
	printf("bytes of int : %d\n", sizeof(b));
	printf("bytes of float : %d\n", sizeof(c));
	printf("bytes of double : %d\n", sizeof(d));
	
	//practice03
	int input_int;
	float input_float;
	
	printf("enter an integer : ");
	scanf("%d", &input_int);
	
	printf("enter a float : ");
	scanf("%f", &input_float);
	
	printf("integer : %d, float : %f\n", input_int, input_float);
	
	//practice04
	char char_x;
	int int_x;
	
	printf("input a number : ");
	scanf("%c", &char_x);
	
	int_x = char_x;
	printf("The input number is %i\n",int_x);

	return 0;
}
