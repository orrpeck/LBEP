#include <stdio.h>
int main(){
	int ary[10];
	float tong=0,trungbinh=0;
	for(int i=0;i<10;i++){
		printf("Nhập số thứ %d: ",i+1);
		scanf("%d",&ary[i]);
		tong+=ary[i];
	}
	trungbinh=tong/10;
	printf("Trung bình bằng = %f\n",trungbinh);
	return 0;
}