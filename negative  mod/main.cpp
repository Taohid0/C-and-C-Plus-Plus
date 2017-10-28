#include <iostream>

using namespace std;
int negative_mod(int b,int d){

         b*=-1;
        int result = d;
        while(result<=b){
                result+=d;

        }
        return result-b;
        }
int main()
{
    int b,d;
    cin>>b>>d;

    cout<<negative_mod(b,d);
    return 0;
}
