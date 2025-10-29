#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sum=0;
    int r;
    while (N!=0){
        r=N%10;
        sum=sum+r;
        N=N/10;
    }
    printf("%d",sum);
    return 0;
}
