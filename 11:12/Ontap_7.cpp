#include <stdio.h>
int main(){
	int n,count=1;
	do{
		printf("Nhập số nguyên dương n: ");
		scanf("%d",&n);
	}while(n<0);
	while(n>10){
		n/=10;
		count++;
	}
	printf("Có %d chữ số\n",count);
return 0;
}