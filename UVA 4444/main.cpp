#include <bits/stdc++.h>

using namespace std;

int rev(int n)
{
    string s = "";


   while(n>0)
   {  ostringstream ss;
          int b = n%10;
          ss<<b;
       s+= ss.str();
       n/=10;
   }
    int result = atoi(s.c_str());


    return result;
}
int main()
{
     ios::sync_with_stdio(false);

    string s;

    while(getline(cin,s))
    {
        int sg =(int)s.size()-1;

        if(s[0]<='9' && s[0]>='0')
        {
            while(sg>=0){
            int temp = ((s[sg]-'0')+(s[sg-1] - '0')*10);

            int r = rev(temp);

            if(temp>=65 && temp<=122)
            {
                sg-=2;
                printf("%c",r);
            }
            else
            {
                r = ((s[sg]-'0')+(s[sg-1]-'0')*10+(s[sg-2]-'0'))*100;
                sg-=3;

                printf("%c",r);
            }
            }
        }
        else
        {
             int sg = (int)s.size()-1;

            for(int i =sg;i>=0;i--)
            {
                int ascii = s[i];
                int r = rev(ascii);
                cout<<r;
            }
        }
        cout<<endl;
    }
    return 0;
}
