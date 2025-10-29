#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    float Average=(float)(num1+num2)/2;
    printf("Average of %d and %d is: %.2f",num1,num2,Average);
    return 0;
}
