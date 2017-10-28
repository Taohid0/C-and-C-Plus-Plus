#include <iostream>

using namespace std;

int main()
{
    int arr[10][10][10][10];
    fill( &arr[0][0][0][0], &arr[10][0][0][0], 10);

    for(int i = 0;i<10;i++)
    {
        for(int j = 0;j<10;j++)
        {
            for(int k=0;k<10;k++)
            {
                for(int l=0;l<10;l++)
                    cout<<arr[i][j][k][l]<< " ";
            }
        }
        cout<<endl;
    }

    return 0;
}
