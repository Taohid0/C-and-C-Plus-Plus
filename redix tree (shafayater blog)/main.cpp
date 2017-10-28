#include <bits/stdc++.h>

using namespace std;

struct node
        {
            bool endmark;
            node *next[27];

            node()
            {
                endmark = false;
                for(int i = 0;i<26;i++)
                {
                    next[i] = NULL;
                }
            }

        }*root;

void insert_word(char *str,int length)
{
    node *cur = root;

    for(int i = 0;i<length;i++)
    {
        int id = str[i]-'a';

        if(cur->next[id]==NULL)
        {
          cur->next[id] = new node();
        }
        cur  = cur->next[id];
    }
    cur->endmark = true;

}

bool search_result(char *str,int length)
{
        node *cur = root;

        for(int i = 0;i<length;i++)
        { int id = str[i]- 'a';
            if(cur->next[id]==NULL)
            {
                return false;
            }
        cur = cur->next[id];
        }
        return cur->endmark;
}
void delete_words(node *cur)
{
    for(int i = 0;i<27;i++)
        {
            if(cur->next[i]!=NULL){
                delete_words(cur->next[i]);
            }
            delete(cur);
        }
    }
int main()
{
    int n;
     root = new node();

    cout<<"enter the number of words ";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        char str[50];
        scanf("%s",str);
        insert_word(str,strlen(str));
    }
    cout<<"enter the number of query ";
    cin>>n;

    for(int i  = 0;i<n;i++)
    {
        char str[50];
        scanf("%s",str);

        if(search_result(str,strlen(str)))
        {
            cout<<"found"<<endl;
        }
        else cout<<"not found"<<endl;
    }

    return 0;
}
