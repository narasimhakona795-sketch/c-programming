#include<stdio.h>
int main(){
    int Firstnumber;
    int Secondnumber;
    scanf("%d%d",&Firstnumber,&Secondnumber);
    if (Firstnumber >Secondnumber){
        printf("%d",Firstnumber);
    }
    else {
        printf("%d",Secondnumber);
    }
    return 0;
}

