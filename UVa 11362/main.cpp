#include <bits/stdc++.h>

using namespace std;
bool test = false;
struct node
{
    bool endmark;
    node *next[10];

    node()
    {
        for(int i  = 0;i<10;i++)
        {
            endmark = false;
            next[i] = NULL;
        }
    }
}*root;



void insertNumber(char *str,int len)
{
    node *cur = root;
    int id;
    for(int i = 0;i<len;i++)
    {
         id = str[i]-'0';

        if(cur->next[id]==NULL)
        {
            cur->next[id]= new node();
        }
        if(cur->endmark)
        {
              test = true;
        }
        cur = cur->next[id];

    }
    cur->endmark = true;
    if(cur->next[id]!=NULL)
    {
        test = true;
    }
}

void del(node *cur)
{
    for(int i= 0;i<10;i++)
    {
        if(cur->next[i])
        {
            del(cur->next[i]);
        }
    }
    delete(cur);
}

int main()
{
    int n,testCase;
    char str[10];

    cin>>testCase;

    while(testCase--)
    {
        root = new node();
        cin>>n;
        test = false;
        for(int i = 0;i<n;i++)
        {
            scanf("%s",str);
            insertNumber(str,strlen(str));
        }
        if(test)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        del(root);

    }
    return 0;
}
