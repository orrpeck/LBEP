#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap vao a= \n");
	scanf("%d",&a);
	printf("Nhap vao b= \n");
	scanf("%d",&b);
	printf("Nhap vao c= \n");
	scanf("%d",&c);
	if(a>(b+c) && b>(a+c) && c>(a+b) ){
		float P,p,S;
		P=a+b+c;
		printf("Chu vi tam giac = %f\n",P );
		p=P/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich tam giac = %f\n",S );
	}else{
		printf("Day khong phai 3 canh tam giac\n");
	}
	return 0;
}