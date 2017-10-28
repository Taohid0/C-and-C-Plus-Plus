#include <bits/stdc++.h>

using namespace std;

string text,pattern;
int m,n,i,b[100],j;

void kmpPreprocess()
{
    m = (int)pattern.length();
     j = -1;
    b[0]= -1;
     i = 0;
    while(i<m)
    {
        while(j>=0 && pattern[i]!=pattern[j])
        {
            j = b[j];
        }
        i++,j++;
        b[i] = j;
    }
}

int main()
{
    while(1){
        getline(cin,text);
        getline(cin,pattern);

         kmpPreprocess();
         bool flag= true;
        n = (int)text.length();
        i = 0;
        j = 0;



            for(int k = 0;k<14;k++)
            {
            //    cout<<b[k]<< " ";
            }

        while(i<n)
        {
            while(j>=0 && text[i]!=pattern[j])
            {
                j = b[j];
            }
           i++,j++;
           if(j==m)
           {
               cout<<"match found at index "<<i-m<<endl;
               j = b[j];
               flag = false;
           }

        }
        if(flag)
           {
               cout<<"match not found "<<endl;
           }

    }
    return 0;
}
