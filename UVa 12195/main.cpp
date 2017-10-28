#include <bits/stdc++.h>

using namespace std;

int main()
{
    float  sum;
    float arr[250];
    arr['W'] = 1;
    arr['H'] = .5;
    arr['Q'] = .25;
    arr['E'] = .125;
    arr['S'] = .0625;
    arr['T'] = .03125;
    arr['X'] = .015625;

    string s;
   int result;
    while(cin>>s)
    {


        result = 0;
        if(s=="*")
            break;

   int len= (int)s.length();
         sum = 0;
        for(int i = 0;i<len;i++)
        {

            if(s[i]=='/')
            {
                if(sum==1.00)
                {
                    result++;
                }
                sum=0;

            }
           else {
                sum+=arr[(int)s[i]];
            }
            //cout<<sum<< " ";
        }
        cout<<result<<endl;
    }


    return 0;
}
