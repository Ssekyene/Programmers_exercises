#include <stdio.h>
// my_string_length function
int str_len(char strng[]);



//main for calling my_string_length function
int main()
{ 
	char strng[100];
	//prompting user input
	printf("\nEnter String: ");
 	scanf("%s", strng);
 	
    // storing result of my_string_length function in length
	int length = str_len(strng);
	
   //printing the length of the user string
   printf("\nThe length of %s is %d", strng, length);
	
}


 //computation of my_string_length function
 
 int str_len(char strng[])
 {
 
 	int count;
 	
	// make a count if the string character is not a null character('\0')
	for(count = 0; strng[count] != '\0'; ++count);
	 
	 //return the final count
	 return count;  
 	
 }
 