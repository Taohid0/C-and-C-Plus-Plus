#include <bits/stdc++.h>

using namespace std;

int main()
{
    string number,temp;
 long a,b;

    while(cin>>number){
        sort(number.begin(),number.end());
        temp = number;
        if(temp[0]=='0')
        {
            for(int i = 1;i<(int)temp.size();i++)
            {
                if(temp[i]!='0')
                {
                    swap(temp[0],temp[i]);
                    break;
                }
            }
        }
        reverse(number.begin(),number.end());
        a = atoll(temp.c_str());
        b = atoll(number.c_str());
        if(a>b){
            swap(a,b);
        }
        int def = b-a;
        int result = def/9;

       printf("%ld - %ld = %ld = 9 * %ld\n",b,a,def,result);
    }
    return 0;
}
