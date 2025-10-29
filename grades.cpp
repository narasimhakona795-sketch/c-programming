#include<stdio.h>
int main(){
    int Physics, Chemistry, Biology, Mathematics, Computerscience;
    scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Mathematics,&Computerscience);
    float average=(float)(Physics+Biology+Chemistry+Mathematics+Computerscience)/5;
    if (average>=90){
        printf("Grade A");
    } 
    else if (average>=80){
        printf("Grade B");
    }
    else if (average>=70){
        printf("Grade C");
    }
    else if (average>=60){
        printf("Grade D");
    }
    else if (average>=40){
        printf("Grade E");
    }
    else {
        printf("Grade F");
    }
    return 0;
}
