#include <iostream>

using namespace std;

int main()
{
    long long n,x = 0,y = 0,z = 0,valuex,valuey,valuez;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>valuex>>valuey>>valuez;
        x+=valuex,y+=valuey,y+=valuez;
    }
    if(z!=0 or y!=0 or z!=0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
