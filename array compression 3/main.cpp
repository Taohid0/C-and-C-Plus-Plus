#include <bits/stdc++.h>

using namespace std;

void compress()
{
    map<int,int>m;
    int input[] = {-102,1,134565589,134565589,-102,666668,134565589,666668,-102,1,-2};
    int assign = 0,n = (int) sizeof(input)/sizeof(int),c=0,compressed[100];

    for(int i = 0;i<n;i++)
    {
        int x = input[i];
        if(m.find(x)==m.end())
        {
            m[x] = assign++;
            printf("mapping %d with %d\n",x,assign-1);
        }
        x = m[x];
        compressed[c++] = x;
    }
    cout<<"compressed array : ";
    for(int i = 0;i<n;i++)
    {
        printf("%d ",compressed[i]);
    }
}

int main()
{
    compress();
    return 0;
}
