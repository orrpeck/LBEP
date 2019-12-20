#include <stdio.h>
int fibonaci( int x){
	int x1=1,x2=1,x3=2;
	for(int i=3;x2+x3<x;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
		if(x3==x)
			printf("So %d o vi tri %d \n",x,i);
		else
			printf("Khong co trong day fibonaci, so gan nhat la %d \n",x3);
	}
	return x3;
}
int main(){
	return 0;
}