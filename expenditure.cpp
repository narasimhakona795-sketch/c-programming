#include<stdio.h>
int main(){
    int X,Y;
    scanf("%d%d",&X,&Y);
    int amount=30*Y;
    if (amount<=X){
        printf("YES");
    }
    else {
        printf("NO");
    }return 0;
}
