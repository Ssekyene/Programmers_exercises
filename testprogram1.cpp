#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	FILE *fp;
	char ch;  char name[10];
	
	fp = fopen ("File", "w"); // <file_name> , <mode>
	
	if(fp == NULL)
		{
		printf("Error in opening");
			exit(1);
		}
		printf("Print anything: ");
		gets(name);
		
		while(name[i] != '\0')
			{
				fputc(name[i], fp);
				i = i+1;
				
			}  
			   fclose(fp);
		   
return(0);
}
/**
 ch = fgets(fp);
 fputs(ch, fp);
 fgets(var, 25, fp);
 fputs(var, fp);
 fprintf(fp, "%s", var);
 nvm = getw(fp);
 putw(num, fp);
 remove("d:\test.txt");
 remove("test1", "test2");
 */



