#include<stdio.h>
int main(){
    int x, y;
    scanf("%d%d",&x,&y);
    if ((float)y/x>=0.75){
        printf("ELIGIBLE");
    }
    else {
        printf("NOT ELIGIBLE");
    }
    return 0;
}
