#include <stdio.h>
int main(){
	int a,b,tong=0;
	do{
		printf("Nhập vào a = ");
		scanf("%d",&a);
		printf("Nhập vào b = ");
		scanf("%d",&b);
	}while(a>=b);
		for(int i=a; i<=b; i++)
			tong+=i;
		printf("Tổng từ %d đến %d bằng %d\n",a,b,tong);


return 0;
}