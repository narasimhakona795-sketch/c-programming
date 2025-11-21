#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	printf("post increment");
	b=a++;
	printf("%d\n",b);
	printf("pre increment");
	scanf("%d",&a);
	b=++a;
	printf("%d",b);
	return 0;
}
