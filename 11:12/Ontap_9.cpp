#include <stdio.h>
int main(){
	int a,b;
	printf("Nhập vào a: ");
	scanf("%d",&a);
	printf("Nhập vào b: ");
	scanf("%d",&b);
	int ucln=1;
	for(int i=1;i<=a;++i)
	{
		if(a%i==0 && b%i==0){
			for (;ucln<=i;ucln++){
				ucln=i;
			}
		}
	}
	printf("UCLN cua a va b la %d",ucln-1);
	return 0;
}