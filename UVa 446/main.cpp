#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int x, y, test;
	char ch;

	cin >> test;

	while ( test-- ) {
		scanf ("%x %c %x", &x, &ch, &y);
		int binary [15] = {0};
		int temp = x;
		int length = 0;
		while ( temp ) {
			binary [length++] = temp % 2;
			temp /= 2;
		}

		int i;
		for ( i = 12; i >= 0; i-- )
			printf("%d", binary [i]);
		printf(" %c ", ch);

		for ( i = 0; i < 15; i++)
			binary [i] = 0;
		temp = y;
		length = 0;
		while ( temp ) {
			binary [length++] = temp % 2;
			temp /= 2;
		}

		for ( i = 12; i >= 0; i-- )
			printf("%d", binary [i]);

		if ( ch == '+' )
			printf(" = %d\n", x + y);
		else
			printf(" = %d\n", x - y);
	}

	return 0;
}
