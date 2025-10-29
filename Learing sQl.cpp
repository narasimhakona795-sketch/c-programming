#include<stdio.h>
int main(){
    int R, C, E;
    scanf("%d%d%d",&R,&C,&E);
    int totalcells=(R*C)+(C*E);
    printf("%d",totalcells);
    return 0;
}
