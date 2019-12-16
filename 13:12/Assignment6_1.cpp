#include <stdio.h>
int main(){
	int n,dem;
	float tong=0,trungbinh=0;
	printf("Nhập vào số lượng số: ");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhập vào số thứ %d: ",i+1);
		scanf("%d",&ary[i]);
		if(ary[i]%2==1){
			tong+=ary[i];
			dem++;
		}
	}
	trungbinh=tong/dem;
	printf("Trung bình các số lẻ bằng %f\n",trungbinh );
return 0;
}