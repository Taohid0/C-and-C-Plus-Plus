#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,r;
    string s;
    char a[20],b[20],R[128];

    cin>>test;

    while(test--)
    {
        cin>>s;

         for(int i = 0;i<128;i++)
         {
             R[i] = i;
         }

        cin>>r;

        for(int i = 0;i<r;i++)
        {
               scanf("%s %s", a, b);
            for (int j = 'A'; j <= 'Z'; j++)
                if (R[j] == b[0])
                    R[j] = a[0];



        }
         for (int i = 0; s[i]; i++){
            putchar(R[s[i]]);}
            cout<<endl;
     //   cout<<s<<endl;

    }
    return 0;
}
