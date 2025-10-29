#include<stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    int totalcost=X*4;
    if(totalcost<=1000){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
