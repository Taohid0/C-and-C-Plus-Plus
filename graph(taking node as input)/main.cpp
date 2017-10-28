#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    int v[100][100];

    printf("enter the number of nodes : ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&v[i][j]);

        }
    }

     for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
           cout << v[i][j] << " ";

        }
        cout<<endl;
    }
    return 0;
}
