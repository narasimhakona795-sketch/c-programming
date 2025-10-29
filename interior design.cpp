#include<stdio.h>
int main(){
    int X1, Y1, X2, Y2;
    scanf("%d%d%d%d",&X1, &Y1, &X2, &Y2);
    int toal1=X1+Y1;
    int total2=X2+Y2;
    if(toal1>total2){
        printf("%d",total2);
    }
    else{
        printf("%d",toal1);
    }
    return 0;
}

