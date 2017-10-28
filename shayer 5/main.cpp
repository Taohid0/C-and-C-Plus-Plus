#include <bits/stdc++.h>

using namespace std;

void print(char *c)
{
    c[0]='a';

    while(*c!='\0')
    {
        printf("%c",*c);
        c++;
    }
}

int main()
{
    char c[20]="hello";
    printf(c);
    return 0;
}
