#include <stdio.h>
int main(){
	int n;
	printf("Nhập vào số lượng số: ");
	scanf("%d",&n);
	int ary[n];
	float tong=0,dem=0,trungbinh=0;
	for(int i=0;i<n;i++){
		printf("Nhập vào số thứ %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++){
		if(i%2==1){
			if(ary[i]%2==1){
				tong+=ary[i];
				dem++;
			}
		}
	}
	trungbinh=tong/dem;
	printf("Trung bình các số lẻ ở vị trí chẵn bằng %f \n",trungbinh);
return 0;
}