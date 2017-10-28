#include <iostream>

using namespace std;

void tower(int n,int x,int y,int z)
{
    if(n>=1){
        tower(n-1,x,z,y);
        cout<<"from "<<x<<" to "<<y<<endl;
        tower(n-1,z,y,x);
    }
}

int main()
{
    tower(3,1,2,3);
    return 0;
}
