#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int t;
char a[70], b[70];
map<char, char> cipher;
int main(){
	scanf( "%d", &t );
	getchar();
	getchar();
	while(t--){
		gets(a);
		gets(b);
		puts(b);
		puts(a);
		cipher.clear();
		for( int i=0; a[i]; ++i ) cipher[a[i]] = b[i];
		while( gets(a) ){
                if(a[0]=='\0')break;
			for( int i=0; a[i]; ++i ){
				if( cipher[a[i]] )
					putchar( cipher[a[i]] );
				else
					putchar( a[i] );
			}
			putchar( '\n' );
		}
		if(t) putchar( '\n' );
	}

}
