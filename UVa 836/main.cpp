#include <bits/stdc++.h>

using namespace std;

vector<string>v;
int arr[150][150];

int calculate()
{

    int m = v.size();
    int n = v[0].size();

    //cout<<m<<" "<<n<<endl;

    for(int i = 0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {

            arr[i][j]=v[i][j]-'0';
            if(i>0)arr[i][j]+=arr[i-1][j];
            if(j>0)arr[i][j]+=arr[i][j-1];
            if(i and j)arr[i][j]-=arr[i-1][j-1];
            if(v[i][j]=='0'){
                    arr[i][j]=0;
            }//cout<<arr[i][j]<<" ";
        }
        //cout<<endl;
    }

    int sum=0,mx;
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            for(int k =i;k<m;k++)
            {
                for(int l=j;l<n;l++)
                {
                    mx=arr[k][l];
                    if(i>0)
                        mx-=arr[i-1][l];
                    if(j>0)mx-=arr[k][j-1];
                    if(i and j)mx+=arr[i-1][j-1];

                    if(mx==(k-i+1)*(l-j+1))
                        sum=max(sum,mx);
                }
            }
        }
    }
return sum;
}

int main()
{
    string s;
    int test;
    cin>>test;

    getchar();
    //getchar();
    getchar();
    while(test--)
    {


        v.clear();

        while(getline(cin,s) and s!="")
        {

            v.push_back(s);
            //cout<<v.size()<<" "<<s.size()<<endl;
        }
        int r = calculate();
        cout<<r<<endl;
        if(test)cout<<endl;


    }
    return 0;
}
