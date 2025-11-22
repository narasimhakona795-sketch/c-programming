#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i=2;
    int counter;
    while (N!=0){
        if (N%i==0){
            counter++;
        }
        else {
            counter=0;
        }
        i++;
    }
    if (counter==0){
        printf("prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}
