#include<stdio.h>
int main(){
    int N, M;
    scanf("%d%d",&N,&M);
    float d=0.9*N;
    if (M<d){
        printf("DINING");
    }
    else if (M>d){
        printf("ONLINE");
    }
    else {
        printf("EITHER");
    }
    return 0;
}
