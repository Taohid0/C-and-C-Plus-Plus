#include <bits/stdc++.h>

using namespace std;

struct node
{
    bool endmadk=false;
    node *next[27];
    node(){
    for(int i = 0;i<27;i++)
    {
        next[i]=NULL;

    }

    }
}*root;

void insert_word(string s)
{
    node *cur = root;
    int len = (int)s.size();

    for(int i=0;i<len;i++)
    {
        int id = s[i]-'a';

        if(cur->next[id]==NULL)
        {
            cur->next[id]=new node();
        }
        cur=cur->next[id];
    }
    cur->endmadk=true;
}
bool search_word(string s)
{
    int counter=0;
    node *cur = root;
    int len = (int)s.size();
    for(int i =0;i<len;i++)
    {
        int id = s[i]-'a';
        if(cur->next[id]==NULL)
        {
            return false;;
        }
        cur = cur->next[id];
        if(cur->endmadk==true)counter++;

    }
    return cur->endmadk;

}

int main()
{
    root= new node();
    string arr[50005];
    string s;
    set<string>st;
    int i =0;
    while(cin>>s)
    {
        arr[i++]=s;
        insert_word(s);
    }
    for(int j =0;j<i;j++)
    {
     for(int l = 1;l<(int)arr[j].size();l++)
     {
         string sb1 = arr[j].substr(0,l);
         string sb2 = arr[j].substr(l,(int)arr[j].size()-l);

        if(search_word(sb1) and search_word(sb2))
        {
            st.insert(arr[j]);
        }
     }
    }
    for(auto i:st)
    {
        cout<<i<<endl;
    }
    return 0;
}
