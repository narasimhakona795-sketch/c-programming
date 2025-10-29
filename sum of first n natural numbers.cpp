#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
   int i=1;
   int sum=0;
    while(i<=N){
        sum=sum+i;
        i=i+1;
    }
printf("%d",sum);
return 0;
}
