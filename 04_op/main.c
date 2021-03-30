#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Practice01	
	int x,y,z,m;
	int a,b,c;
	
	x=1;
	a=3;
	b=4;
	c=5;
	
	y= a*x*x + b*x + c;
	m =(x+y+z) /3 ; 
	
	printf("y=%d, m=%d\n",y,m);
	
	//practice02
	int hw =3;
	int cond1, cond2;
	
	cond1 = 2 < hw && hw <5;
	cond2 = hw > 1 || hw < 4 && hw > 3;
	
	printf("cond1=%d, cond2=%d\n",cond1,cond2);
	
	//practice03
		
	int aa;
	int bb;
	
	printf("input two integers :");
	scanf("%d",&aa);
	scanf("%d",&bb);
	
	printf("+ result is %d\n",aa+bb);
	printf("- result is %d\n",aa-bb);
	printf("* result is %d\n",aa*bb);
	printf("/ result is %d\n",aa/bb);
	printf("%% result is %d\n",aa%bb);
		
	
	return 0;
}
