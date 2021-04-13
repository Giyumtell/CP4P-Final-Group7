//Version 2
#include "Converting.h"
#define _CRT_SECURE_NO_WARNINGS

//This function is responsible for converting string inputs to integral and double

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
		gets(int_string);
		if (strcmp(int_string, "q") == 0) break;
		//atoi() function recieves a string as an argument and converts ASCII to int then returns the int value
		int_number = atoi(int_string);
		printf("Converted number is %d\n", int_number);
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");
	printf("*** Start of Converting Strings to double Demo ***\n");
	char double_string[80];
	double double_number;
	while (TRUE)
	{
		//This loop converts input string into double using atof()
		//this loop prompts user until input value is equal to 'q'
		printf("Type the double numeric string (q - to quit) :\n");
		gets(double_string);
		if (strcmp(double_string, "q") == 0) break;
		//atof() function recieves a string as an argument and converts ASCII to int then returns the double value
		double_number = atof(double_string);
		printf("Converted number is %f\n", double_number);
	}
	printf("*** End of Converting Strings to double Demo ***\n\n");
}