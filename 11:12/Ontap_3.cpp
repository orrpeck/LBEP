#include <stdio.h>
int main(){
	int n,x1=1,x2=1,x3=2;
	printf("Nhập vào số n = ");
	scanf("%d",&n);
	for(int i=4; i<=n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;		
	}
	printf("Số thứ %d trong dãy Fibonaci là %d \n",n,x3);
return 0;
}