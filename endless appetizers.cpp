#include<stdio.h>
int main(){
    int X, Y, R;
    scanf("%d%d%d",&X,&Y,&R);
    int totalsticks=(R/30)+X;
    int noofplates;
    if (totalsticks%Y==0){
        noofplates=totalsticks/Y;
    }
    else {
        noofplates=(totalsticks/Y)+1;
    }
printf("%d",noofplates);
return 0;
}
