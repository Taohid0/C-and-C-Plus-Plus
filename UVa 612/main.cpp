#include <bits/stdc++.h>

using namespace std;

struct info
{
    int a;
    string s;

    bool operator<(const info &  p)const
    {
        return a<p.a;
    }
};

vector<info >vp;

void process(string s)
{
    int len = s.size();
    int counter=0,temp;
    for(int i = 0;i<len;i++)
    {
        temp=0;
        for(int j=i+1;j<len;j++)
        {
            if(s[i]>s[j])
                temp++;
        }
        counter+=temp;
    }
    info t;
    t.s = s;
    t.a=counter;
    vp.push_back(t);
}

int main()
{
    int test,r,c;
    string s;
    cin>>test;
    while(test--)
    {

        vp.clear();
        cin>>r>>c;
        for(int i = 0;i<c;i++)
        {
            cin>>s;
            process(s);
        }
        stable_sort(vp.begin(),vp.end());
        for(int i =0;i<c;i++)
        {
            cout<<vp[i].s<<endl;
        }
        if(test)cout<<endl;
        //cout<<"done";
    }
    return 0;
}
