#include<stdio.h>
#define cmperinch 2.54
int main (){
    int inches;
    scanf("%d",&inches);
    double centimeters=inches*cmperinch;
    printf("%.2f",centimeters);
    return 0;
}
