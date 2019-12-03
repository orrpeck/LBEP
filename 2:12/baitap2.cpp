#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("Nhap so a=\n");
	scanf("%d",&a);
	printf("Nhap so b=\n");
	scanf("%d",&b);
	printf("Nhap so c=\n");
	scanf("%d",&c);
	if(a<b){
		if(c<a){
			printf("%d nho nhat\n",c);
		}else{
			printf("%d nho nhat\n",a);}
	}else{
		if(c<b){
			printf("%d nho nhat\n",c);
		}else{
			printf("%d nho nhat\n",b);
		}}

}