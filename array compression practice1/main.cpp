#include <bits/stdc++.h>

using namespace std;

void compress(int arr[],int n)
{
    map<int,int>mymap;
    int assgn = 0;
    vector<int>compressed;

    for(int I  = 0;I<n+1;I++)
    {
        int x = arr[I];

        if(mymap.find(x)==mymap.end())
        {
            mymap[x]= assgn;

            printf("%d is mapped with %d\n",x,assgn);
            assgn++;
        }
        x = mymap[x];
        compressed.push_back(x);
    }
    cout<<"compressed array " ;

    for(int i = 0;i<(int)compressed.size();i++)
    {
        cout<<compressed[i]<< " ";
    }
}

int main()
 {
    int arr[] = {-102,1,134565589,134565589,-102,666,134565589,666,-102,1,-2};
//    cout<<"enter the number of integers ";
//    cin>>n;
//    for(int i = 0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
    compress(arr,10);

    return 0;
}
