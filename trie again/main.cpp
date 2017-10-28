#include <bits/stdc++.h>

using namespace std;

struct node{
bool endmark;
node *next[27];
node()
{
    endmark =false;
    for(int i= 0;i<27;i++)
    {
        next[i] =NULL;
    }
}
}*root;

void insert_word(char *str,int len)
{
    node *cur = root;
    int id;
    for(int i = 0;i<len;i++)
    {
        id = str[i]-'a';
        if(cur->next[id]==NULL)
            cur->next[id] = new node();
        cur = cur->next[id];

    }
    cur->endmark =true;
}
bool search_word(char *str,int len)
{
    node *cur=  root;
    for(int i = 0;i<len;i++)
    {   int id = str[i]-'a';
        if(cur->next[id]==NULL)return false;
        cur = cur->next[id];cout<<cur->endmark<<endl;
    }
    return cur->endmark;
}
void delete_trie(node *cur)
{
    for(int i = 0;i<27;i++)
    {
        if(cur->next[i])
            delete_trie(cur->next[i]);
    }
    delete(cur);
}

int main()
{
    root=new node();
    int n;
    char word[100];
    cin>>n;
    while(n--)
    {
        scanf("%s",word);
        insert_word(word,strlen(word));
    }
    scanf("%s",word);
    cout<<search_word(word,strlen(word));
    return 0;
}
