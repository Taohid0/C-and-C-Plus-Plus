#include <bits/stdc++.h>

using namespace std;

int row[100];
int a,b,line=1;

bool place(int r,int c )
{
    for(int prev = 0;prev<c;prev++)
    {
        if(row[prev]==r || (abs(row[prev]-r))==abs(prev-c))
            return false;
    }
    return true;
}

void backTrack(int c)
{
    if(c==8 && row[b]==a)
    {
        printf("%2d      %d",line++,row[0]+1);
        for(int i = 1;i<8;i++)
        {
            cout<< " "<<row[i]+1;
        }
        cout<<endl;
    }

    for(int j = 0;j<8;j++)
    {
        if(place(j,c))
        {
            row[c] = j;
            backTrack(c+1);
        }
    }
}


int main()
{
    int tc;
    cin>>tc;

    while(tc--){
            line=1;
    cin>>a>>b;
    a--;b--;

    cout<<"SOLN       COLUMN"<<endl;
    cout<<" #      1 2 3 4 5 6 7 8"<<endl<<endl;

    backTrack(0);
     if(tc)cout<<endl;
    }
    return 0;
}
