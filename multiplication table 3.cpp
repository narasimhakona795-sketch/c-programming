#include<stdio.h>
int main(){
    int N,A,B;
    scanf("%d%d%d",&N,&A,&B);
    int i=A;
    while (i<=B){
printf("%d x %d = %d",N,i,N*i);
i++;
    }
 return 0;
}
