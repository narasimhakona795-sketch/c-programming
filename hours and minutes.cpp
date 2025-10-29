#include<stdio.h>
int main(){
    int minutes;
    scanf("%d",&minutes);
    int Hour=minutes/60;
    int noofminute=minutes%60;
    printf("%d Hour(s) %d Minute(s)",Hour,noofminute);
    return 0;
}
