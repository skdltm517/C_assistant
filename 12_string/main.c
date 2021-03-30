#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	//practice01 optional

	char code1 = 'A';
	int code2 = 65;

	printf("code1 = %c, (%d)\n", code1, code1);
	printf("code2 = %c, (%d)\n", code2, code2);
	
	//practice02
	
	char str[4];
	int i;
	
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	printf("%s\n", str);
	
	while(str[i] != '\0'){
		
		printf("%c",str[i]);
		i++;
	}
	
	//practice03
	
	char src[] ="The worst things to eat before you sleep";
	char dst[100];
	
	strcpy(dst, src);
	printf("copied string : %s", dst);
	
	//practice04
	
	char str[30] = "happy C programming";
	
	printf("string length of \"%s\" : %i", str, strlen(str));
	*/
	//practice05
	FILE* fp;
	char input[30];
	int i;
	
	
	fp = fopen("sample.txt","w");
	
	for(i=0;i<3;i++){
		printf("input a word : ");
		scanf("%s",&input);
		fprintf(fp,"%s\n",input);
	}
	
	fclose(fp);	
	
	
	
	
	
	//practice06 optional

	//while(1)
	//{
	//cha = getchar();
	//printf("%c\n",cha);
		
	//}
	
	
	return 0;
}
