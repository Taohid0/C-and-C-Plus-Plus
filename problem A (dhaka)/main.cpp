#include <bits/stdc++.h>

using namespace std;

int main()
{
    long m,n,a;
    scanf("%ld%ld%ld",&m,&n,&a);

    double a1 = (double)m/a;
    double a2 =(double)n/a;
    printf("%.0lf\n",ceil(a1)*ceil(a2));

    return 0;
}
