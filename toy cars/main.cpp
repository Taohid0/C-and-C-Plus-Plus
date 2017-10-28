#include <bits/stdc++.h>


using namespace std;

int main()
{   int n,sum = 0;
    int cars[101][101];
    cin>>n;

    int result[101] = {0};
    int index = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>cars[i][j];

            if(cars[i][j]==0){
                sum+=1;
            }
            }
        }
int j;
    for(int i = 0;i<n;i++){
        for( j = 0;j<n;j++){
                if(cars[i][j]==1 || cars[i][j]==3){
                    break;
                }

                }if(j==n){
                    result[index++] = i+1;}}
    cout<<index<<endl;

    if(index>0){
    for(int i = 0;i<index;i++){
    cout<<result[i]<<" ";
    }
    cout<<endl;}
    return 0;
}
