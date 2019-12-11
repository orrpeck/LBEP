#include <stdio.h>
int main(){
	int a,b,c;
	
	do{
		printf("Nhập vào cạnh a: ");
		scanf("%d",&a);
		printf("\nNhập vào cạnh b: ");
		scanf("%d",&b);
		printf("\nNhập vào cạnh c: ");
		scanf("%d",&c);
	}while((a>b+c)||(b>c+a)||(c>a+b));
	printf("Đây là tam giác <3\n");

return 0;
}