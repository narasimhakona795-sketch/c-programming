#include<stdio.h>
int main(){
    int X, Y, Z;
    scanf("%d%d%d",&X,&Y,&Z);
    int maxmangoes=(Z-Y)/X;
    printf("%d",maxmangoes);
    return 0;
}
