#include<stdio.h>
int main(){
    int A, B, X, Y;
    scanf("%d%d%d%d",&A,&B,&X,&Y);
    int t1=A*2+B*1;
    int t2=X*2+Y*1;
    if (t1>t2){
        printf("Messi");
    }
    else if (t2>t1){
        printf("Ronaldo");
    }
    else {
        printf("Equal");
    }
    return 0;
}
