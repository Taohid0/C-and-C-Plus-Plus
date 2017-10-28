#include <bits/stdc++.h>

using namespace std;

int n;
bool check(int m)
{
    int c = 0;
    vector<int>list;
    for(int i = 1;i<=n;i++)
    {
        list.push_back(i);
    }
    while(list[c]!=13)
    {
        list.erase(list.begin()+c);
        c+=m-1;
        if(c>=(int)list.size())c %=list.size();
    }
    return list.size()==1;
}
int main()
{
    while(true)
    {
        cin>>n;
        if(!n)break;
        int m = 1;
        while(!check(m))m++;
        cout<<m<<endl;
    }
    return 0;
}
