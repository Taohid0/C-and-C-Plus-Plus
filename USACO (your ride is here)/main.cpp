/*
ID: taohidu2
PROG: ride
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
     ofstream fout ("ride.out");
    ifstream fin ("ride.in");

    string s1,s2;
    int t1=1,t2=1;

    getline(fin,s1);
    getline(fin,s2);
    int len1 = (int)s1.length();
    int len2=(int)s2.length();

    for(int i =0;i<len1;i++)
    {
        t1*=s1[i]-'A'+1;
        t1%=47;
    }
    for(int i =0;i<len2;i++)
    {
        t2*=s2[i]-'A'+1;
        t2%=47;
    }
    if(t1==t2)
    {
        fout<<"GO"<<endl;
    }
    else
        fout<<"STAY"<<endl;

        cout<<'Z'-'A'+1;

    return 0;
}
