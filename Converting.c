#include "Converting.h"
#define _CRT_SECURE_NO_WARNINGS
/*
This function is responsible for converting string inputs to integral
*/
void converting()
{
	printf("*** Start of Converting Strings to int Demo ***\n");
	//Declaration

	char int_string[80];
	int int_number;
	while (TRUE)
	{
                //This loop converts input string into int using atoi()
		//this loop prompts user until input value is equal to 'q'
		printf("Type the int numeric string (q - to quit) :\n");
		scanf("%s", int_string);
		if (strcmp(int_string, "q") == 0) break;
//atoi() function recieves a string as an argument and converts ASCII to int then returns the int value
		int_number = atoi(int_string);
		printf("Converted number is %d\n", int_number);
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");

}