#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    bool conti;
    long long base1,base2,power,i,sum1,reminder;
    vector<char>result;
    vector<char> :: iterator it;
    while(cin>>base1>>base2>>s1)
    {
        if(s1=="0")
        {
            cout<<"0 base "<<base1<<" = 0 base "<<base2<<endl;
            continue;
        }
        conti=false;
        sum1=0;
        power=0;
        for(i=s1.length()-1;i>=0;i--)
                    {
                        if(s1[i]>47 && s1[i]<58)
                        {
                            sum1+=(s1[i]-48)*pow(base1,power++);
                            if(s1[i]-48>=base1)
                            conti=true;

                        }

                        else
                        {
                            sum1+=(s1[i]-55)*pow(base1,power++);
                            if(s1[i]-55>=base1)
                            conti=true;
                        }
                    }
        if(conti)
        {
            cout<<s1<<" is an illegal base "<<base1<<" number"<<endl;
            continue;
        }

        while(sum1){
            reminder=sum1%base2;
            if(reminder>9)

            result.push_back(reminder+55);
            else
            result.push_back(reminder+48);
            sum1/=base2;
        }

        cout<<s1<<" base "<<base1<<" = ";
        for(it=result.end()-1;it>=result.begin();it--)
        cout<<*it;
        cout<<" base "<<base2<<endl;
        result.clear();

        }

return 0;
}
