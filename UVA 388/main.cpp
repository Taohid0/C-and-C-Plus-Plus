#include <bits/stdc++.h>

using namespace std;

int main()
{
    char arr[105][105];
    int n,m,counter,field=1;
    bool test =false;

    while(1)
    {
        cin>>n>>m;
        if(!n and !m)break;
        if(test)cout<<endl;
        for(int i  =0;i<=103;i++)
        {
            for (int j=0;j<=103;j++)
                arr[i][j]='.';
            arr[i][0]='.';
            arr[i][m+1]='.';
            arr[0][i]= '.';
            arr[m+1][i]='.';
        }

        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            cin>>arr[i][j];
        }

       /* for(int i = 0;i<=n+1;i++)
        {
            for(int j = 0;j<=m+1;j++)
                cout<<arr[i][j];
                cout<<endl;
        }*/

        cout<<"Field #"<<field++<<":"<<endl;
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                counter=0;
                if(arr[i][j]=='*')cout<<'*';
                else
                {
                    if(arr[i][j+1]=='*')counter++;
                    if(arr[i][j-1]=='*')counter++;
                    if(arr[i+1][j]=='*')counter++;
                    if(arr[i-1][j]=='*')counter++;

                    if(arr[i+1][j+1]=='*')counter++;
                    if(arr[i-1][j-1]=='*')counter++;
                    if(arr[i+1][j-1]=='*')counter++;
                    if(arr[i-1][j+1]=='*')counter++;

                    cout<<counter;
                }
            }
            cout<<endl;
        }
        test =true;

    }
    return 0;
}
