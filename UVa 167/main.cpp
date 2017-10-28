#include <bits/stdc++.h>

using namespace std;

int chess[10][10];

int high = -1;
int row[10];

bool place(int r,int c)
{
    for(int I= 0;I<c;I++)
    {
        if(row[I]==r || abs(row[I]-r)==abs(I-c)){return false;}
    }
    return true;
}
void backTrack(int c)
{
    if(c==8)
    {
        int t = 0;
        for(int I= 0;I<8;I++)
        {
            t+=chess[I][row[I]];
        }
        if(high<t)high= t;
    }
    else
    {
        for(int I = 0;I<8;I++)
        {
            if(place(I,c))
            {
                row[c] =I;
                backTrack(c+1);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n;

    cin>>n;
    while(n--)
    {
        for(int I = 0;I<8;I++)
        {
            for(int J = 0;J<8;J++)
            {
                cin>>chess[I][J];
            }
        }
        backTrack(0);
        printf("%5d\n",high);
        high = -1;
    }
    return 0;
}
