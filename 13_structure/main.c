#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "keywords.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int ID;
	char name[10];
	double grade;
	
};

int is_whitespace(char c)
{
	if( c == ' ' ||
		c == '\r' ||
		c == '\n' ||
		c == '\t' ||
		c == '('  )
	{
	
		return 1;
		
	}
	
	return 0;
}

int fget_word(FILE* fp, char *word)
{
	char c;
	int cnt;
	
	while ( ( c = fgetc(fp)) != EOF )
	{
		if(is_whitespace(c)==0)
			break;	
		
	}
	
	if(c ==EOF)
	{
		return 0;
	}
	
	cnt = 0;
	word[cnt++] = c;
	word[cnt] = '\0';
	
	while ( (word[cnt] = fgetc(fp)) != EOF )
	{
		if(is_whitespace(word[cnt])==1)
		{
			word[cnt] = '\0';
			break;
		}
		
		cnt++;
	}
	
	return cnt;
}

int main(int argc, char *argv[]) {
	/*
	//practice01
	struct student s1 = {24,"hwkim",4.3};
	
	s1.ID =123456;
	strcpy(s1.name,"±â¸Å¿ø");
	s1.grade = 4.3;
	
	printf("ID : %i\nName : %s\ngrade : %f\n",s1.ID,s1.name,s1.grade);
	*/
	//practice02
	FILE *fp;
	char filepath[100];
	char word[100];
	
	//file open 
	printf("input the file path: ");
	scanf("%s",filepath);
	fp = fopen(filepath,"r");
	
	if ( fp == NULL)
	{
		printf("file path is wrong! %s\n",filepath);
		return -1;
		
		}	
	
	//word reading & analysis
	while(fget_word(fp, word) != 0 )
	{
		//printf("%s\n",word);	
		count_word(word);
	}

	//output
	print_word();
	
	
	fclose(fp);
	return 0;
}
