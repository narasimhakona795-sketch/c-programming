#include<stdio.h>
int main(){
    float Salary,HRA,DA;
    scanf("%f%f%f",&Salary,&HRA,&DA);
    float PF=Salary*0.12;
    float Grosssalary=Salary+HRA+DA+PF;
    printf("%.2f",PF);
    printf("%.2f",Grosssalary);
    return 0;
}
