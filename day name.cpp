#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    if (s==1){
        printf("Monday");
    }
    else if (s==2){
        printf("Tuesday");
    }
    else if (s==3){
        printf("Wednesday");
    }
    else if (s==4){
        printf("Thursday");
    }
    else if (s==5){
        printf("Friday");
    }
    else if (s==6){
        printf("Saturday");
    }
    else if (s==7){
        printf("Sunday");
    }
    else {
        printf("Invalid input");
    }
 return 0;
}
