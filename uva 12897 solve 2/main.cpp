#include<bits/stdc++.h>
#define sz 1000005

using namespace std;

int arr[100];
char str[sz];

int main()
{
    long long test,i,len,n,a,b;

    char ch1,ch2;

    scanf("%lld",&test);

    getchar();

    while(test--)
    {
        gets(str);

        len=strlen(str);

        for(i=65;i<=90;i++)
        {
            arr[i]=i;
        }

        scanf("%lld",&n);
        getchar();

        while(n--)
        {
            scanf("%c %c",&ch1,&ch2);
            a=(int)ch2;
            b=(int)ch1;
            for(i=65;i<=90;i++)
            {
                if(arr[i]==a)
                {
                    arr[i]=b;
                }
            }
            getchar();
        }

        for(i=0;i<len;i++)
        {
            if(isalpha(str[i]))
            {
                printf("%c",arr[str[i]]);
            }

            else
            {
                printf("%c",str[i]);
            }
        }

        printf("\n");
    }
    return 0;
}
