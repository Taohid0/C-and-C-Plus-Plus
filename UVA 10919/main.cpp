#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,m,testSub,cnt,sub,c,minR;

    while(cin>>k,k)
    {    cin>>m;
        bool subCmpBool = true;
        vector<int>v;

        while(k--)
        {
            cin>>sub;
            v.push_back(sub);
        }
        while(m--)
        {   cnt = 0;
            cin>>c>>minR;
            while(c--){
                cin>>testSub;
                for(int i = 0;i<(int)v.size();i++)
                {
                    if(testSub==v[i])
                    {
                        cnt++;
                    }
                }
            }
            if(cnt<minR)
            {
                subCmpBool =false;
            }
        }
        if(subCmpBool)
        {
            cout<<"yes\n";
        }
        else
            cout<<"no\n";
    }
    return 0;
}
