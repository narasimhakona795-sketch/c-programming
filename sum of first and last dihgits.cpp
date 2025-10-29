#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int last =N%10;
    while (N>=10){
        N=N/10;

    }
    int first=N;
    printf("%d",last+first);
    return 0;
}
