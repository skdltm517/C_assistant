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

int calcCombination(int n, int r) //4 �����Լ����� ������ �޺���̼ǿ� ���� �Լ� ���� 
{
	int high, low; //5 ����, �и� ���� 
	high = factorial(n); //6 ������ ���� 
	low = factorial(n-r)*factorial(r); //7 �и��� ���� 
	
	return (high/low); //8 �޺���̼��� ��������  
}

int main(int argc, char *argv[])
{
	int n, r; //3 �������� 
	int res; 
		
	printf("input n and r: "); //1 �������� 
	scanf("%d %d", &n, &r); //2 �Է� 
		
	res = calcCombination(n, r);
	printf("combination result is %d\n", res); 
	
	return 0;		
}
