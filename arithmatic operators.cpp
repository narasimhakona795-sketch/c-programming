#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int Addition=num1+num2;
    int Difference=num1-num2;
    int Product=num1*num2;
    int Division=num1/num2;
    int Remainder=num1%num2;
    printf("Sum:%d",Addition);
    printf("Difference:%d",Difference);
    printf("Product:%d",Product);
    printf("Quotient:%d",Division);
    printf("Remainder:%d",Remainder);
    return 0;
}
