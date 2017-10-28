#include <bits/stdc++.h>

using namespace std;
//net code
long long to_decimal(string s,int base)
{
    int cnt=0;
    long long res=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if ( s[i] > 47 && s[i] < 58 )
        res+= (pow(base,cnt)*(s[i]-'0'));
        else
        res+= (pow(base,cnt)*(s[i]-55));
        cnt++;
    }
    return res;
}

string dec_to(long long num, int base)
{
    string s="";
    while(num)
    {
        int tmp=num%base;
        if(tmp<10)
            s+=tmp+'0';
        else
            s+= char (tmp+55);
        num/=base;
    }
    if(s=="")
    return "0";
    return s;
}

int main()
{
   string s,sr,res;
   int from, to;
   while(cin>>s>>from>>to)
   {
       long long buf;
       buf=to_decimal(s,from);
       sr=dec_to(buf,to);
       res="";
       for(int i=sr.length()-1;i>=0;i--)
            res+=sr[i];
       if(res.length()>7)
            cout<<"  ERROR"<<endl;
       else
            cout<<setw(7)<<res<<endl;
       //cout<<setw(7)<<dec_to(buf,to)<<endl;
   }
return 0;
}
