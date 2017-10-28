#include <bits/stdc++.h>

using namespace std;

struct node
{
    bool endmark;
    node *next[27];

    node()
    {
        for(int i = 0;i<26;i++)
        {
            next[i] = NULL;
        }
    }
} *root;


void insert_word(char *str,int len)
{
    node *cur = root;

     int id;

     for(int i = 0;i<len;i++)
     {
         id= str[i]-'a';

         if(cur->next[id]==NULL)
         {
             cur->next[id] = new node();
         }
         cur = cur->next[id];
     }
     cur->endmark = true;
}
bool search_word(char *str,int len)
{
    int id;
    node *cur = root;

    for(int i = 0;i<len;i++)
    {
        id = str[i]-'a';
       if(cur->next[id]==NULL)
       {
           return false;
       }
       cur = cur->next[id];

    }
    return true;//or cur->endmark??
}

void delete_word(node *cur)
{
    for(int i = 0;i<26;i++)
    {
        if(cur->next[i])
        {
            delete_word(cur->next[i]);
        }
    }
    delete(cur);
}

int main()
{
    char str[100],srch[100];
    int n;

    root = new node();

    cout<<"how many word do you want to enter ?"<<endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        scanf("%s",str);

        insert_word(str,strlen(str));
    }

    cout<<"how many word do you want to search? "<<endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        scanf("%s",srch);

        if(search_word(srch,strlen(srch)))
        {
            cout<<"found"<<endl;
        }
        else
            cout<<"not found"<<endl;
    }
    delete_word(root);
    return 0;
}
