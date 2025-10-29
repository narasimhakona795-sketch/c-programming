#include<stdio.h>
int main(){
    int days;
    int years, weeks;
    scanf("%d",&days);
    years=days/365;
    int remainingdays=days%365;
    weeks=remainingdays/7;
    printf("%d",years);
    printf("%d",weeks);
    return 0;
}

