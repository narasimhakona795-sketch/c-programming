#include<stdio.h>
int main(){
    int A, B;
    scanf("%d%d",&A,&B);
    int total =abs((A*B)-(A+B));
    printf("%d",total);
    return 0;
}
