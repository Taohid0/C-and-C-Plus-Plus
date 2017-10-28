#include <bits/stdc++.h>

using namespace std;

vector<int>v;

int main()
{
    int test,cnt,temp;
    cin>>test;

    while(test--)
    {
        cin>>cnt;
        for(int i = 0;i<10;i++)
        {  bool flag = false;
            cin>>temp;

                for(int i = 0;i<(int)v.size();i++)
            {
                if(v[i]==temp)
                {
                    flag = true;
                }
            }
            if(!flag)
                v.push_back(temp);
            }

            sort(v.begin(),v.end());
             cout<<cnt<<" "<<v[((int)v.size()-3)]<<endl;
        v.clear();


    }
}
