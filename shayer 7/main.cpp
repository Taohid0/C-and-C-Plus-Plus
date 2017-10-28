#include<iostream>
using namespace std;

int main()
{
    int temp,i,j,k;
    cin>>i;
    cin>>j;
    if(i<j){
        temp=i;
        i=j;
        j=temp;
    }

    while(1){
        k=i%j;

        if(k==0)break;
        i=j;
        j=k;
    };
    cout<<j<<endl;
    return 0;
}
