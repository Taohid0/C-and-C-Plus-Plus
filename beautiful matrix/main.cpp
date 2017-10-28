#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mat[6][6];
    int loc1,loc2;

    for(int i= 1;i<6;i++)
    {
        for(int j = 1;j<6;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                loc1 = i;
                loc2 = j;
            }
        }
    }
    int t1 = abs(3-loc1)+abs(3-loc2);
    cout<<t1<<endl;
    return 0;
}
