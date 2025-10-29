#include<stdio.h>
int main(){
    int speed_kmph;
    float speed_mps;
    scanf("%d",&speed_kmph);
    speed_mps=(float)speed_kmph*1000/3600;
    printf("%.2f",speed_mps);
    return 0;
}
