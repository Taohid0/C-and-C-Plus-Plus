#include <bits/stdc++.h>

using namespace std;

int row[100];
int n;

bool place(int r,int c)
{
    for(int prev=0;prev<c;prev++)
    {
        if(row[prev]==r || (abs(row[prev]-r)==abs(prev-c)))
            return false;
    }
    return true;
}

void backtrack(int c)
{
    if(c==n)
    {
        for(int i = 0;i<n;i++)
        {
            cout<<i+1<<" "<<row[i]+1<<endl;
        }
        cout<<endl;
    }
    for(int r = 0;r<n;r++)
    {
        if(place(r,c))
        {
            row[c] = r;
            backtrack(c+1);
        }
    }

}



int main()
{

    cin>>n;
    backtrack(0);
    return 0;
}
