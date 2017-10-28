#include <bits/stdc++.h>

using namespace std;

long long calculate(string s)
{
    long long sum = 0;
    int len = (int)s.size();
    for(int i = 0;i<len;i++)
    {
        sum+=s[i]-'0';

    }

    return sum;

}

int main()
{
    string s;
    cin>>s;

    int counter=0;
    while(s.size()>1)
    {
        long long r = calculate(s);

        stringstream ss;
        ss<<r;
        s = ss.str();

        counter++;
    }
    cout<<counter;

    return 0;
}
