#include<stdio.h>
#include<math.h>
int main()
{
    float cp,sp;
    scanf("%f%f",&cp,&sp);
    float loss=cp-sp;
    float losspercentage=(loss/cp)*100;
    printf("%.2lf",losspercentage);
    return 0;
}
