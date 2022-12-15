#include <stdio.h>

int main()
{
	int num;
	
	printf("Hello World!");
	
	START:
		printf("\nEnter any number: ");
		scanf("%d", &num);
		if(num<0)
		{
			goto NEGATIVE;
		}
		else if(num>0)
		{
			goto POSITIVE;
		} 
		else
		{
			goto EXIT;
		}
	
	NEGATIVE:
		printf("\nThe number is negative");
		goto START;
		
	POSITIVE:
		 printf("\nThe number is positive");
		 goto START;
	
	EXIT:	 
		printf("\nThe program has ended"); 
		 
	return (0);
}

