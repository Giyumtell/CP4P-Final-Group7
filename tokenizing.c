#include "tokenizing.h"
#define _CRT_SECURE_NO_WARNINGS
int main()
{
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