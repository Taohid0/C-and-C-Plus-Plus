#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793
int main()
{   double a, b, c;
    double s, r_out, r_inside, area_triangle, area_circle_circum, area_inscribed;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3)
    {
        s=(a+b+c)/2;
        area_triangle=sqrt(s*(s-a)*(s-b)*(s-c));

        r_out=((a*b*c)/(4*area_triangle));
        r_inside=((area_triangle/s));

        area_circle_circum=(pi*pow(r_out, 2))-area_triangle;
        area_inscribed=(pi*pow(r_inside, 2));
        area_triangle=(area_triangle-area_inscribed);

        printf("%.4lf %.4lf %.4lf\n", area_circle_circum, area_triangle, area_inscribed);
    }
    return 0;
}
