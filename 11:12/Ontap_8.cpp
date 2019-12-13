#include <stdio.h>
int main(){
	int n,tong=0;
	do{
	printf("Nhập số nguyên dương n: ");
	scanf("%d",&n);
	}while(n<0);
	while(n>10){
		tong+=n%10;
		n/=10;
	}
	tong+=n;
	printf("Tổng các chữ số của %d bằng %d\n",n,tong);
return 0;
}