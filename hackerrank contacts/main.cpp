#include <bits/stdc++.h>

using namespace std;

struct node {
    int counter;
    node *next[28];

    node()
    {
        counter=0;
        for(int i=0;i<27;i++)
            next[i]=NULL;
    }
}*root;

void addName(string s)
{
    int len=(int)s.size();
    int id;
    node *cur=root;
    for(int i=0;i<len;i++)
    {
        cur->counter++;
         id= s[i]-'a';
        if(cur->next[id]==NULL)
        {
            cur->next[id]=new node();
        }
       //cout<<s[i]<<" "<<cur->counter<<endl;
        cur = cur->next[id];

    } cur->counter++;
}

int counterFind(string s)
{
    int len = (int)s.size();
    int i;
    node *cur=root;
    int id,r;
    for(i=0;i<len;i++)
    {

        id= s[i]-'a';
        if(cur->next[id]==NULL)return 0;

        cur=cur->next[id];
      //  cout<<s[i]<<" "<<cur->counter<<endl;
        r = cur->counter;

    }
    return r;
}
int main()
{
  //  ios_base::sync_with_stdio(false);
    root = new node();
    int test;
    string s1,s2;
    cin>>test;
    getchar();

    while(test--)
    {

        cin>>s1;
        getline(cin,s2);
        if(s1=="add")
        {
            addName(s2);
        }
        else
        {
            int ans=counterFind(s2);

            cout<<ans;cout<<endl;
        }

    }

    return 0;
}
