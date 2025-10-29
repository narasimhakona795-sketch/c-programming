#include<stdio.h>
#define pi 3.14
int main(){
    int Radius;
    scanf("%d",&Radius);
    float Area,Perimeter;
    Area=pi*Radius*Radius;
    Perimeter=2*pi*Radius;
    printf("%.2f",Area);
    printf("%.2f",Perimeter);
    return 0;
}
