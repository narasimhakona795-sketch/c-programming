#include<stdio.h>
int main(){
    int T,S,B;
    scanf("%d%d%d",&T,&S,&B);
   int capacity=2*T*S*B*512;
    int capacityinKB=capacity/1024;
    printf("%d KB",capacityinKB);
    return 0;
}
