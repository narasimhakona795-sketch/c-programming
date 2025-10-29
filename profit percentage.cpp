#include<stdio.h>
int main()
{
    double CP,SP;
    scanf("%lf%lf",&CP,&SP);
    double profitpercentage=((SP-CP)/CP)*100;
    printf("%.2lf",profitpercentage);
    return 0;
}
