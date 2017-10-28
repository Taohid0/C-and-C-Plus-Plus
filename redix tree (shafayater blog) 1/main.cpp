#include <bits/stdc++.h>

using namespace std;

struct node{
       bool endmark;
       node *next[27];

       node()
       {
           endmark = false;
           for(int i = 0;i<27;i++)
           {
               next[i] = NULL;
           }
       }
       } *root;


void insert_word(string str,int length)
{
            node *curr  = root;

            for(int i =  0 ;i<length;i++)
            {
                int id = str[i]-'a';

                if(curr->next[id]==NULL)
                {
                    curr->next[id] = new node();
                }
                curr =curr->next[id];
            }
            curr->endmark = true;
}

bool search(string str,int length)
{
    node *curr  = root;

    for(int i  = 0;i<length;i++)
    {
        int id = str[i]-'a';

        if(curr->next[id]==NULL)
            return false;
            curr = curr->next[id];
    }

    return curr->endmark;
}

void del(node *curr){

                for(int i = 0;i<26;i++)
                {
                 if(curr->next[i])
                 {
                     del(curr->next[i]);
                 }
                 delete (curr);
                }
                }
int main()
{
    int n;
    string str;
    root = new node();

    cout<<"enter the number of words ";
    cin>>n;
    while(n--)
    {
        cin>>str;
        insert_word(str,(int)str.length());
    }

    cout<<"enter the number of query ";
    cin>>n;
    while(n--)
    {
        cin>>str;

        if(search(str,(int)str.length())){
            cout<<"found"<<endl;
        }
        else cout<<"not found"<<endl;
    }
    del(root);
    return 0;
}
