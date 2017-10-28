#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,m,x[3010]={0};
    cin>>num;

    for(i=0;i<num;i++)
        cin>>x[i];
    sort(x,x+num);
    m=0;
    for(i=0;i<num;i++)
    {
        if(x[i]==x[i+1])
        {
            x[i+1]++;
            m++;
        }
    }
    cout<<m<<endl;
    return 0;

}
