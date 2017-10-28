#include <algorithm.h>


int main()
{
    int arr[] = {1,0,2,0,23,63,5,6,4,6,54,6},i;

    sort(0,12);

    for(i = 0;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
