#include<stdio.h>
int main(){
    int Year;
    scanf("%d",&Year);
    int lasttwodigits=Year%100;
    printf("%.2d
",lasttwodigits);
    return 0;
}
