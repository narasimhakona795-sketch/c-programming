#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	printf("post decrement");
	b=a--;
	printf("%d\n",b);
	printf("pre decrement");
	scanf("%d",&a);
	b=--a;
	printf("%d",b);
	return 0;
}
