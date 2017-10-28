#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int x,n,pos;
    while(cin>>n)
    {
        if(!n)break;
        int cars[100001] = {0};
            bool error =false;
             for(int i = 0;i<n;i++)
             {
                 cin>>x>>pos;

                 if(i+pos<0 || i+pos>=n || cars[i+pos])error =true;

                 else if(!error) cars[i+pos] =x;
             }
             if(error)cout<<-1;
             else
             {
                        cout<<cars[0];
                for(int i = 1;i<n;i++)
             {
                 cout<<" "<<cars[i];
             }
             }
             cout<<endl;
    }
    return 0;
}
