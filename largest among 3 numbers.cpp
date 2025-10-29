#include<stdio.h>
int main(){
    int NUM1,NUM2,NUM3;
    scanf("%d%d%d",&NUM1,&NUM2,&NUM3);
int largest;
largest=(NUM1>NUM2)?((NUM1>NUM3)?NUM1:NUM2):((NUM2>NUM3)?NUM2:NUM3);
    printf("%d",largest);
return 0;
}
