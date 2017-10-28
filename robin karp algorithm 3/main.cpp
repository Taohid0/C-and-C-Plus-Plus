#include <bits/stdc++.h>

using namespace std;

int mod = 1000007;
int multiply = 257;


int robin_karp(string text,string pattern)
{
    int txtLen = (int)text.size();
    int patternLen = (int)pattern.size();
    int hashPattern = 0;
    int hashText = 10;
    int h = 0,j;

    for(int i = 0;i<patternLen-1;i++)
    {
        h = (h*multiply)%mod;
    }

    for(int i  = 0;i<patternLen;i++)
    {
        hashPattern = (hashPattern*multiply+pattern[i])%mod;
        hashText = (hashText*multiply+text[i])%mod;
    }

    for(int i = 0;i<txtLen-patternLen;i++)
    {
        if(hashPattern==hashText)
        {
            for(j = 0;j<patternLen;j++)
            {
                if(pattern[j]!=text[j+i])
                    break;
            }
            if(j==patternLen)
            {
        return i+1;
          }
        }


    if(i<txtLen-patternLen)
    {
        hashText = ((hashText-text[i]*h)*multiply+text[i+patternLen])%mod;

        if(hashText<0)
        {
            hashText+=mod;
        }
    }
    }
    return -1;

}

int main()
{
   string text,pattern;

 while(1){
        getline(cin,text);
   getline(cin,pattern);

   int result = robin_karp(text,pattern);

   if(result==-1)
   {
       cout<<"not found"<<endl;
   }
   else
    cout<<"found at position "<<result<<endl;
}
    return 0;
}
