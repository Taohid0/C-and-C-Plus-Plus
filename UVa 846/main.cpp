#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,count,difference,x,y;

    cin>>t;
    while(t--){
       count = 0;
        bool flag = false;
    {int start = 1;

        cin>>x>>y;

        difference = y-x;
        while(difference>0)
        {
           difference-=start;
            count++;
            if(flag)start++;
            flag = !flag;
        }
        cout<<count<<endl;
    }}
    return 0;
}
