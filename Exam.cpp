#include <stdio.h>
#include <math.h>
double chuvi(double a, double b, double c){
	double p=(a+b+c)/2;
	printf("Chu vi tam giac bang %lf \n",p*2);
	return p;
}
double dientich(double a, double b, double c, double p){
	double p2=p/2;
	double s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	printf("Dien tich tam giac bang %lf \n",s);
	return s;
}
int main(){
	double a,b,c;
	do{
		printf("Nhap vao a: ");
		scanf("%lf",&a);
		printf("Nhap vao b: ");
		scanf("%lf",&b);
		printf("Nhap vao c: ");
		scanf("%lf",&c);
	}while( a+b<c || b+c<a || a+c<b );
	double p=chuvi(a,b,c)*2;
	dientich(a,b,c,p);
	return 0;
}