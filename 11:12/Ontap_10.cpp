#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhập vào số nguyên dương n: ");
		scanf("%d",&n);
	}while(n<0);
	int x1=0,x2=1,x3=1;
	while(x3<=n){
		if(x1+x2>n){
			printf("Số thuộc dãy Fibonaci gần %d nhất là %d\n",n,x3);
			break;
		}
		x3=x1+x2;
		x1=x2;
		x2=x3;
	}
return 0;
}