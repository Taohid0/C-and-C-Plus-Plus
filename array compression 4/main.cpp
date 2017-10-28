#include <bits/stdc++.h>

using namespace std;

void compress()
{
    map<int,int>m;
    int input[] = {-102,1,134565589,134565589,-102,66666668,134565589,66666668,-102,1,-2};


    int n = sizeof(input)/sizeof(int);
    sort(input,input+n);
//     for(int i = 0;i<n;i++){
//            int x = input[i];
//    if(m.find(x)==m.end())
//    {
//        m[x] = assign++;
//        printf("mapping %d with %d\n",x,assign-1);
//    }
//        compressed[c++] = m[x];
//
//    } cout<<"array list : ";
//    for(int i= 0;i<n;i++)
//    {
//     cout<<compressed[i]<<" ";
//    }
for(int i = 0;i<n;i++)
{
    cout<<input[i]<<" ";
}
}

int main()
{
    compress();
    return 0;
}
