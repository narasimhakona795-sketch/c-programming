#include<stdio.h>
int main()
{
    int Basicsalary;
    float DA,HRA,Grosssalary;
    scanf("%d",&Basicsalary);
    if (Basicsalary<=10000){
        DA=0.80*Basicsalary;
        HRA=0.20*Basicsalary;
    } else if(Basicsalary<=20000){
        DA=0.90*Basicsalary;
        HRA=0.25*Basicsalary;
    }
    else {
        DA=0.95*Basicsalary;
        HRA=0.30*Basicsalary;
    } 
    Grosssalary=Basicsalary+DA+HRA;
    printf("%.2f",Grosssalary);
    return 0;
}
