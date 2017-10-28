#include <bits/stdc++.h>

using namespace std;

int main()
{  int sum = 0;
    char line[5];


         gets(line);
        stringstream ss(line);

        int num;
        vector<int>v;
        while(ss>>num)
        {
            v.push_back(num);
        }

        sort(v.begin(),v.end());

        for(int i = 0;i<(int)v.size();i++)
        {  sum+=v[i];

            cout<<v[i]<< " ";
        }
        cout<<sum;


    return 0;
}
