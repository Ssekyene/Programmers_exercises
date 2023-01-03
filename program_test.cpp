#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	FILE *fp;
	
	char ch, name[10];
	
	fp = fopen("testing", "w");
		
		if(fp == NULL)
			{
				printf("Failed to open the file");
				exit(1);
			}
		
	printf("Enter dev's name: ");
		
	gets(name);
	
	fputs(name, fp);
	
	return (0);
}
/**
1.ch = fgetc(fp);
2.fgets(var, 25, fp);
3.fprintf(fp, "%s",var);
4.fscanf(stdin, "%d", &var);
5.num = getw(fp);
6.putw(num, fput);
7.remove("c:\test");
8.rename("test", "exam");

*/
