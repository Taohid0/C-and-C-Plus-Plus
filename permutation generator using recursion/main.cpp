#include <iostream>

using namespace std;

void permu(string s,int k,int l)
{
  if(l==k)cout<<s<<endl;

else
    for(int i = k;i<=l;i++)
    {   swap(s[i],s[k]);
        permu(s,k+1,l);
        swap(s[i],s[k]);
    }
}

int main()
{   string s = "abcd";

    permu(s,0,3);

    return 0;
}
