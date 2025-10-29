#include<stdio.h>
int main(){
    int base1;
    int base2;
    int height;
    scanf("%d%d%d",&base1,&base2,&height);
    float Area=0.5*height*(base1+base2);
    printf("%.4f",Area);
    return 0;
}
