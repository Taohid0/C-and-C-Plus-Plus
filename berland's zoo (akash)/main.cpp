#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,k,l,a,b,c,d;
    bool bl;
    while(cin>>l)
    {
        bl=false;
        k=l;
        map<int,int> mp;
        for(i=0;i<k;i++)
        {
            cin>>a>>b;
            mp.insert(pair<int,int>(a,b));
        }

        map<int,int> :: iterator it;
        map<int,int> :: iterator ite;
        for( it = mp.begin() ; it != mp.end() ; it++ )
        {
            a=it->first;
            b=it->second+a;
            for(ite= mp.begin(); ite!=mp.end(); ite++)
            {
                c=ite->first;
                d=ite->second+c;

                if(a==d && b==c)
                {
                    bl=true;
                    cout<<"YES"<<endl;
                    break;
                }
            }

            if(bl==true)
                break;
        }
        if(bl==false)
            cout<<"NO"<<endl;

    }
    return 0;
}
