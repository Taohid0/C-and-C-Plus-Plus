#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    char name[100];
    cin>>test;
    getchar();

    while(test--)
    {
        vector<string>v;
        gets(name);
        char *first = strtok(name," ");
        while(first!=NULL)
        {
            first[0] = toupper(first[0]);
            v.push_back(first);
            first = strtok(NULL," ");
        }
        for(int i = 0;i<(int)v.size();i++)
        {
            if(i==(int)v.size()-1)
                {
                    cout<<v[i][0];
                    for(int j = 1;j<(int)v[i].size();j++)
                        cout<<(char)tolower(v[i][j]);
                    cout<<endl;
                }
            else
                cout<<v[i][0]<<". ";
        }
    }
    return 0;
}
