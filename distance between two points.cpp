#include<stdio.h>
#include<math.h>
int main(){
    int X1,Y1,X2,Y2;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    float distance=sqrt(pow(X2-X1,2)+pow(Y2-Y1,2));
    printf("%.4f",distance);
    return 0;
}
