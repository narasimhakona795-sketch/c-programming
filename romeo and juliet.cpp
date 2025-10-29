#include<stdio.h>
int main(){
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    int totalmoney=(X*5)+(Y*10);
   int maximumnumberofchocolates=totalmoney/Z;
   printf("%d",maximumnumberofchocolates);
   return 0;
}
