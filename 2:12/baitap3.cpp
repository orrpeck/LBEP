#include <stdio.h>
#include <math.h>
int main(){
	int a;
	int b;
	int c;
	float d;
	float x1;
	float x2;
	float x;
	printf("Nhap a=\n");
	scanf("%d",&a);
	printf("Nhap b=\n");
	scanf("%d",&b);
	printf("Nhap c=\n");
	scanf("%d",&c);
	if(a!=0){
		d=b*b-4*a*c;
		if(d<0){
			printf("Phuong trinh vo nghiem\n");
		}else{
			if(d==0){
				x=-b/(2*a);
				printf("%f\n",x);
			}else{
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("x1= %f\n",x1);
				printf("x2= %f\n",x2);
			}
		}
	}else{
		x=-c/b;
		printf("x= %f\n",x);
	}
}
