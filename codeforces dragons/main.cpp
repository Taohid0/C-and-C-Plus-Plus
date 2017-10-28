#include <bits/stdc++.h>

using namespace std;

struct info{
int strength,bonus;

}dragons[10005];
bool compare (info p1,info p2)
{
    return p1.strength<p2.strength;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i = 0;i<b;i++)
    {
        cin>>dragons[i].strength>>dragons[i].bonus;
    }
    sort(dragons,dragons+b,compare);
    bool test =  true;

    for(int i = 0;i<b;i++)
    {
        if(a<=dragons[i].strength)
        {
            test = false;
            break;
        }
        else
            a+=dragons[i].bonus;
    }
    if(test)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
