#include<stdio.h>
int main(){
	 int c1,c2,c3;
	 printf("enter your numbers");
	 scanf("%d%d%d",&c1,&c2,&c3);
	 int d= !((c1<c2)||(c1!=c3));
	 printf("d=%d",d);
	 return 0;
}
