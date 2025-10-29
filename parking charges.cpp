#include<stdio.h>
int main(){
    int X, Y, H;
    scanf("%d%d%d",&X,&Y,&H);
int totalcharges;
if(H==1){
    totalcharges=X;
}
else
{
    totalcharges=X+(Y*(H-1));
}
printf("%d",totalcharges);
return 0;
}
