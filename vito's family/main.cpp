#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,t,n,a[5000],sum;
    scanf("%d",&t);
    while(t--)
    {
        int p=50000000;
        scanf("%d",&n);

        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+i);
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {
            sum+=abs(a[j]-a[k]);
            }
            if(sum<p){
                p = sum;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
