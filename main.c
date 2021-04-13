
int main() {
	void fundamentals();
{
	printf("* Start of Indexing Strings Demo *\n");
	//Declaring Variables
	char buffer1[80];
	char num_input[10];
	int position;

	/* While loops starts here
	* It will prompt user to enter input data.
	*/
	while (TRUE)
	{
		printf("Type a string (q - to quit) :\n");// This will prompt until user enters q
		scanf("%s", buffer1);
		if (strcmp(buffer1, "q") == 0) // strcmp function compares strings character by character using ACII value of the characters.
			break;
		while (TRUE)
		{
			printf("Type the character position within the string:\n");
			scanf_s(num_input);
			position = atoi(num_input);
			if (position >= strlen(buffer1))// strlen function is used to calculate the length of the string
			{
				printf("Wrong position...type again, please\n");
				continue;
			}
			printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
			break;
		}

	}
	printf("*** End of Indexing Strings Demo ***\n\n");// This will display when user enters q
}
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

	void converting();
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
	void tokenizing();
	{
		printf("*** Start of Tokenizing Words Demo ***\n");
                //Declaration variables
		char words[200];
		char* word;
		int w_counter;
		while (TRUE)
		{
                        //This While loop converts words into int using strtok()
                        //This While loop prompts user until input value is equal to 'q'
			printf("Type a few words separated by space(q - to quit) :\n");
			scanf("%s", words);
			if (strcmp(words, "q") == 0) break;
                        //strtok() function recieves a words as an argument and coverts ASCII to " " then returned 
			word = strtok(words, " ");
			w_counter = 1;
			while (word) {
				printf("Word #%d is \'%s\'\n", w_counter++, word);
				word = strtok(NULL, " ");

			}

		}
		printf("*** End of Tokenizing Words Demo ***\n\n");

	}
	return 0;
}