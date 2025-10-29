#include<stdio.h>
int main(){
    int N, X;
    scanf("%d%d",&N,&X);
    int ofdonationsrequired=abs(N-X);
    printf("%d",ofdonationsrequired);
    return 0;
}
