#include <bits/stdc++.h>

using namespace std;
vector<int>graph[1000];

int bfs(int source,int destination)
{
    int level[10001],u,v;
    int visited[10010] = {0};
    level[source] = 0;
    visited[source] = 1;
    queue<int>q;

    q.push(source);

    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int i = 0;i<(int)graph[u].size();i++)
        {
            v=  graph[u][i];

            if(!visited[v])
            {
                level[v] =level[u]+1;
                visited[v] = 1;
                q.push(v);
            }
        }
    }
    return level[destination];
}

int main()
{
    ios::sync_with_stdio(false);
    map<string,int>findx;
    int indx = 1;
    string wordList[10000],word,srcWord,desWord;
    int mmatch,i,j,r,test;

    cin>>test;

    while(test--)
    {
        indx = 1;
        for(int g = 0;g<1000;g++)
        {
            graph[g].clear();
        }
        while(1){
        cin>>word;
        if(word=="*")break;
        findx[word] = indx;
        wordList[indx] = word;
        indx++;

        }
        for(i = 0;i<indx;i++)
        {

            for(j = 0;j<indx;j++)
            {

                if((int)wordList[i].size()==(int)wordList[j].size())
                {
                     mmatch = 0;
                    for(int w = 0;w<(int)wordList[i].size();w++)
                    {
                        if(wordList[i][w]!=wordList[j][w])
                        {
                            mmatch++;
                        }
                    }
                    if(mmatch==1)
            {
                graph[findx[wordList[i]]].push_back(findx[wordList[j]]);
                graph[findx[wordList[j]]].push_back(findx[wordList[i]]);
                  }
                }
            }

        }
         /*int len = (int)srcWord.size();
           for(int s = 0;i<len;s++)
           {
               if(srcWord[s]==' ')
               {
                   desWord = srcWord.substr(i+1,len-1-i);
                   srcWord = srcWord.substr(0,i-1);
                   break;
               }
           }*/

           getchar();
        while(getline(cin,srcWord))
        {

            int len = (int)srcWord.size();
           for(int s = 0;i<len;s++)
           {
               if(srcWord[s]==' ')
               {
                   desWord = srcWord.substr(i+1,len-1-i);
                   srcWord = srcWord.substr(0,i-1);
                   break;
               }
           }
            r = bfs(findx[srcWord],findx[desWord]);
            cout<<srcWord<<" "<<desWord<< " "<<r<<endl;
        }
        cout<<endl;

    }
    return 0;
}
