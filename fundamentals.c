#include "fundamentals.h"

void fundamentals()
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