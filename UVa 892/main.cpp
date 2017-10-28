#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch,sentence[10000];
    int indx;
    while(cin>>c)
    {
        int len = strlen(sentence);
        if(sentence[len-1]=='-')
        {
            for(int i = len-1;i>=0;i--)
                if(sentence[i]==' ')indx =i;
        }

        for(int i = 0;i<indx;i++)
          if(isalpha(c)|| c==' ' || c=='\n')
             cout<<c;
           cout<<endl;
        if()
    }
    return 0;
}
