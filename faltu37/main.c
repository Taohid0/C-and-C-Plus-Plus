#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numberOfCharacters;
	int i, j, k;
	char ch;

	//Calculate total number of characters
	numberOfCharacters = 0;
	for(i = 1; i <= 6; i++)
		numberOfCharacters += i;
	//for 6 lines numberOfCharacters should be 21
	//printf("%d", numberOfCharacters);

	//intialize last characters print (for 6 lines it should be U)
	ch = 'A' + numberOfCharacters; //As 21 includes 'A'
	//printf("%c", ch);

	//We need 6 lines. We will print 6 chars at line 1, 5 at line 2 and so on
	//to print characters i times we initialize i to 6 and gradually decrease i
	for(i = 6; i >= 1; i--) //#1
	{
		//Print space. 0 space at line 1, 1 space at line 2 and so on
		for( j = 0; j < 6-i; j++ )//#2
			printf("  ");

		//First character to print is ch - i at line i
		ch = ch - i; //for i = 6 it should be P, for i = 5 it should be K and so on
		//printf("%c", ch);

		//Print i characters starting from ch
		for(j = 0; j < i; j++) //#3
			printf("%c ", ch++);

		//we adjust the value of ch for the next iteration
		ch = ch - i;
		//print new line
		printf("\n");

	}//end for 1
    return 0;
}
