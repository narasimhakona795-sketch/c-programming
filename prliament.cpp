#include<stdio.h>
int main(){
    int N, X;
    scanf("%d%d",&N,&X);
    if (X>= (float)N/2.0){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
