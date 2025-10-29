#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double s;
    double heronsformula;
    scanf("%lf%lf%lf",&a,&b,&c);
    s =(a+b+c)/2.0;
    heronsformula =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.4f",heronsformula);
    return 0;
}

