#include <bits/stdc++.h>

using namespace std;

struct info{
int digit,paint;

bool operator< (info const p)const{
    if(paint==p.paint)
        return digit>p.digit;
    return paint<p.paint;
}
};

int main()
{

    int total,value;
    info strct;
    vector<info>v;
    int counter=1;
    cin>>total;
    while(cin>>value)
    {
        strct.digit=counter++;
        strct.paint =value;
        v.push_back(strct);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++)
        cout<<v[i].digit<<" "<<v[i].paint<<endl;

    if(v[0].paint>total)
    {
        cout<<-1<<endl;
        return 0;
    }
    while(total>0)
    {
        cout<<v[0].digit;
        total-=v[0].paint;
    }
    return 0;
}
