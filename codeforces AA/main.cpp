#include <bits/stdc++.h>

using namespace std;

int candidate[101],winner[101];

int main()
{  int n,m,result,vote;

    cin>>n>>m;
  int max = -1;
    for(int i = 1;i<=m;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            cin>>vote;
            if(vote>>max)
            {
                max = vote;
                winner[i] = vote;
            }
        }
    }
    max = -1;
    for(int i = 1;i<=m;i++)
    {
        if(max<winner[i])
        {
            result = i;
            max = winner[i];
        }
    }
    cout<<result<<endl;
    return 0;
}
