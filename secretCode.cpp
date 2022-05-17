#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void header()
{
	printf("***** Columbia University *****");
	printf("Rudolph, Joseph Murray - Master in Data Science");
	printf("221-b, Baker Street\n\n");

}

int main()
{
	char word[60], option;
	int counter;

	do
	{
		header();
		printf("Enter a phrase: ");
		fgets(word, 60, stdin);
		for(counter = 0; counter < strlen(word); counter++)
		{
			if(word[counter] == 'A' || word[counter] == 'a')
			{
				word[counter] = '2';
			}
			else if(word[counter] == 'E' || word[counter] == 'e')                       
		      	{
				word[counter] = '3';
			}
			else if(word[counter] == 'I' || word[counter] == 'i')
                        {
                                 word[counter] = '4';
			}
			else if(word[counter] == 'O' || word[counter] == 'o')
                        {
                                 word[counter] = '5';
			}
			else if(word[counter] == 'U' || word[counter] == 'u')
                        {
                                 word[counter] = '6';
			}
			else if(word[counter] == '2')
                        {
                                 word[counter] = 'a';
			}
			else if(word[counter] == '3')
                        {
                                 word[counter] = 'e';
			}
			else if(word[counter] == '4')
                        {
                                 word[counter] = 'i';
			}
			else if(word[counter] == '5')
                        {
                                 word[counter] = 'o';
			}
			else if(word[counter] == '6')
                        {
                                 word[counter] = 'u';
			}

		}
		printf("\nThe code phrase is: %s", word);
		printf("\nWant to try again? [Y] or [N]: \n");
		scanf("%c", &option);
		fflush(stdin);
		while(option != 'y' && option != 'Y' && option != 'n' && option != 'N')
		{
			printf("\nERROR!!! Want to try again? [Y] or [N]: ");
			scanf("%c", &option);
			fflush(stdin);
		}
		getchar();
	}
	while(option == 'y' || option == 'Y');
	return 0;
}	








