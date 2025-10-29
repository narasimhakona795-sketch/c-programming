#include<stdio.h>
int main(){
    float Height;
    scanf("%f",&Height);
    if (Height<150){
        printf("Person is Dwarf.");
    }
    else if (Height>150&&Height<=165){
        printf("Person is average heighted.");
    }
    else if (Height>165 && Height<=195){
        printf("Person is taller.");
    }
    else{
        printf("Abnormal height.");
    }
    return 0;
}
