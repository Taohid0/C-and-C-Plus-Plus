#include <stdio.h>
#include <stdlib.h>

int main()
{
   int p;

	for (int i = 0; i<5; i++)
	{
		for(int j = 0; j< 5-i; j++)
			printf("  ");

		p = 1;
		for(int k = 0; k < (2*i+1); k++)
		{
			printf("%d ", p);

			if( k < i ) p++;
			else p--;
		}

		printf("\n");
	}

	//lower half
	for (int i = 5; i>=0; i--)
	{
		for(int j = 0; j< 5-i; j++)
			printf("  ");

		p = 1;
		for(int k = 0; k < (2*i+1); k++)
		{
			printf("%d ", p);

			if( k < i ) p++;
			else p--;
		}

		printf("\n");
	}
	printf("\n\n");

	return 0;
}
