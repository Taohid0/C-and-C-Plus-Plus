#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long q,b,l,m,arr[100005];
    cin>>b>>q>>l>>m;
    bool inf =false;
    long long mul;
    if(b==0 or q==0 )
    {
        mul=0;
        inf = true;
    }
    else if(b==1 or q==1)
    {
        mul = b;
        inf =true;
    }
    long long value, testValue;
    long long counter = 0;
    for(int i = 0;i<m;i++)
    {
        cin>>value;
        long long t =abs(value);
        if(t==0)continue;
        if(b==0 and t<=l)
        {
            if(value==0 )inf =false;
        }
        else if(t%b==0 and t<=l)
            {
                counter++;
                //cout<<counter<<endl;
             if(value==mul)inf =false;
            }
            //cout<<inf<<endl;
    }
    //cout<<counter<<endl;

    long long counter2=0;
    long long i = b;

    long long t = abs(b);

    while(1 and !inf and q!=0 and q!=1)
    {
        //cout<<i<<endl;
        counter2++;
        i = i*q;
        //cout<<i<<" "<<counter2<<endl;
        long long t =abs(i);
        if(t>l)break;


    }
    //cout<<counter<<endl;
    if(inf)cout<<"inf"<<endl;
    else
    {
        if(counter2>counter)cout<<counter2-counter<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
