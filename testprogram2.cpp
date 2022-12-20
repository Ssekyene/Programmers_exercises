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
		
	fgets(name, 5, fp);
	
	printf("%s", name);
	
	fclose(fp);	
return(0);
}

