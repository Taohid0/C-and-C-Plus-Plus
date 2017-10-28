#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[200],n,len;
    memset(arr,0,sizeof(arr));
    string s;
    cin>>n>>s;
    len = (int)s.size();
    int counter = 0;
    for(int i =0;i<len;i++)
    {
        if((arr[(int)tolower(s[i])-'a'])==0)
           {
               arr[(int)tolower(s[i])-'a']=1;
               counter++;
           }
    }
    //cout<<counter<<" "<<n<<endl;
    if(counter==26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
