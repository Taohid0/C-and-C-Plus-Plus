#include <iostream>

using namespace std;

void TowerH(int n,int x,int y,int z)
{
    if(n>=1)
    {
        TowerH(n-1,x,z,y);
        cout<<"move top disk from tower "<<x<<" to tower "<<y<<endl;
        TowerH(n-1,z,y,x);
    }
}

int main()
{
    TowerH(10,1,2,3);
    return 0;
}
