#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	int res=1;
	int i;
	
	for(i=1; i<=n; i++)
	{
		res =res *i;
	}
	
	return res;
}

int calcCombination(int n, int r) //4 메인함수에서 지정한 콤비네이션에 대한 함수 지정 
{
	int high, low; //5 분자, 분모 선언 
	high = factorial(n); //6 분자의 형태 
	low = factorial(n-r)*factorial(r); //7 분모의 형태 
	
	return (high/low); //8 콤비네이션의 최종형태  
}

int main(int argc, char *argv[])
{
	int n, r; //3 변수선언 
	int res; 
		
	printf("input n and r: "); //1 변수선언 
	scanf("%d %d", &n, &r); //2 입력 
		
	res = calcCombination(n, r);
	printf("combination result is %d\n", res); 
	
	return 0;		
}
