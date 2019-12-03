#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("Nhap a=\n");
	scanf("%d",&a);
	printf("Nhap b=\n");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}