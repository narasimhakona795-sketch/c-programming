#include<stdio.h>
int main(){
    int Side;
    scanf("%d",&Side);
    int SurfaceArea=6*Side*Side;
    int Volume=Side*Side*Side;
    printf("Surface area = %d and Volume = %d",SurfaceArea,Volume);
    return 0;
}
