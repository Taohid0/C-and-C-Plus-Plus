#include <bits/stdc++.h>

using namespace std;

void compress()
{
    map<int,int>m;
    int input[] = {-102,1,134565589,134565589,-102,6666668,134565589,6666668,-102,1,-2};
    int assign = 0,c = 0,compressed[100];
    int n = sizeof(input)/sizeof(int);

    for(int i = 0;i<n;i++)
    {
        if(m.find(input[i])==m.end()){
        m[input[i]] = assign++;
        printf("mapping %d with %d\n",input[i],assign-1);
    }
    compressed[c++] = m[input[i]];
    }
    cout<<"compressed array : ";
    for(int i= 0;i<n;i++)
    {
        cout<<compressed[i]<<" ";
    }

}

int main()
{
    compress();
    return 0;
}
