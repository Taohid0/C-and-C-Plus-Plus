#include <iostream>

using namespace std;

string s="abcd";

void permutation(int k,int n)
{
    if(k==n)
    {
        cout<<s<<endl;
    }
    for(int i = k;i<=n;i++)
    {
        swap(s[i],s[k]);
        permutation(k+1,n);
        swap(s[i],s[k]);
    }
}


int main()
{

    permutation(0,3);
    return 0;
}
