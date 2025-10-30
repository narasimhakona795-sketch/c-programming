#include<stdio.h>
int main(){
    int A,B;
    scanf("%d%d",&A,&B);
    int i=1;
    while (i<=B){
        printf("%d x %d = %d",A,i,A*i);
        i++;
    }
    return 0;
}
