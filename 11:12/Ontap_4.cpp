#include <stdio.h>
int main(){
	int n,x1=1,x2=1,x3=2,x=x1+x2+x3;
	printf("Nhập vào số n = ");
	scanf("%d",&n);
	for(int i=4; i<=n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
		x+=x3;		
	}
	printf("Tổng %d số đầu tiên trong dãy Fibonaci bằng %d\n",n,x );
return 0;
}