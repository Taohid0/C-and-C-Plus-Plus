#include <bits/stdc++.h>

using namespace std;

int main()
{  ios::sync_with_stdio(false);

    int arr[1000][1000],m,n,i,j,r;
    vector<int>row,column;
    char inpt;
    while(1)
    {
        cin>>m>>n;
        if(!m)break;
        for(i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cin>>inpt;
                if(inpt=='@')
                {
                    row.push_back(m);
                    column.push_back(n);
                }
            }
        }
        r = 0;

       m = (int)row.size();
       n = (int)column.size();
       for(i = 0;i<m;i++)
       {
           for(j = 0;j<n;j++)
           {
               if
           }
       }

    }
    return 0;
}
