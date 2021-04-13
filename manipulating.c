#define _CRT_SECURE_NO_WARNINGS //Remove security warnings
#include <stdio.h> //Standard Input Output. It has the information related to input/output functions
#include <string.h> // header defines one variable type, one macro, and various functions for manipulating arrays of characters.
#define TRUE 1 //define True to be equal to 1 as a constant that can be sued throughout the code
int main() {
	void manipulating(); {
		printf("*** Start of Concatenating Strings Demo ***\n"); 
		char string1[80]; // making a string called string 1
		char string2[80]; //making a string called string 2
		while (TRUE) { //Using atoi, this loop transforms the input string to an int ()
			// this loop prompts the user before the input value equals 'q'
		printf("Type the 1st string (q - to quit):\n"); 
		gets(string1); // scan or read a line of text from a standard input (stdin) device and store it in the String2 variable
		if (strcmp(string1, "q") == 0) break; // The atoi() function takes a string as an argument, transforms it to int, and then returns the int value.
		printf("Type the 2nd string:\n"); 
		gets(string2); //scan or read a line of text from a standard input(stdin) device and store it in the String2 variable
		strcat(string1, string2);  //strcat is afunction used to concatinate strings
		printf("Concatenated string is \'%-s\'\n", string1); //prints concatinated string
	} 
		printf("*** End of Concatenating Strings Demo ***\n\n");
}

}





