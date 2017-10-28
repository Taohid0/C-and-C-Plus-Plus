#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double l, d, v, g, r;

int main()
{
    scanf("%lf %lf %lf %lf %lf", &l, &d, &v, &g, &r);

    double t = 0;
    t += d/v;

    double p = t-floor(t/(g+r) )*(g+r);
    if( p < g );
    else t = ceil(t/(g+r) )*(g+r);

    t += (l-d)/v;

    printf("%.8f\n", t);
}
