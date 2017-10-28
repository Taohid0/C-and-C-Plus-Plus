#include<bits/stdc++.h>

using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    char c;

    while(scanf("%c",&c)==1)
    {
        if(isalpha(c))
        {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U' )
            {
                while(isalpha(c))
                {
                    putchar(c);
                    c = getchar();
                }
                printf("ay");
            }
            else
            {
                char last = c;
                c = getchar();
                while(isalpha(c))
                {
                    putchar(c);
                    c = getchar();

                }

                printf("%cay",last);
            }
        }
        printf("%c",c);
    }

    return 0;

}
