#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao a= \n");
	scanf("%d",&a);
	printf("Nhap vao b= \n");
	scanf("%d",&b);
	if(a>=b){
		float c;
		c=(float)a/(float)b;
		printf("%f\n",c);
	}else{
		int c;
		c=a*b;
		printf("%d\n",c);
	}
	return 0;

}