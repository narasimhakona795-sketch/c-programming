#include<stdio.h>
int main(){
    int totalseconds;
    scanf("%d",&totalseconds);
    int hours=totalseconds/3600;
    int remainingseconds=totalseconds%3600;
    int minutes=remainingseconds/60;
    int seconds=remainingseconds%60;
    printf("H:M:S-%d:%d:%d",hours,minutes,seconds);
    return 0;
}
