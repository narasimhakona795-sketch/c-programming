#include<stdio.h>
int main(){
    int HurlFactor, SpinFactor, SpeedFactor;
    scanf("%d%d%d",&HurlFactor,&SpinFactor,&SpeedFactor);
    int grade;
    int cod1=HurlFactor>50;
    int cod2=SpinFactor>60;
    int cod3=SpeedFactor>100;
    if (cod1&&cod2&&cod3){
        grade =10;
    }
    else if (cod1&&cod2){
        grade=9;
    }
    else if (cod2&&cod3){
        grade=8;
    }
    else if (cod1&&cod3){
        grade=7;
    }
    else if (cod1||cod2||cod3){
        grade=6;
    }
    else {
        grade=5;
    }
    printf("%d",grade);
    return 0;
}
