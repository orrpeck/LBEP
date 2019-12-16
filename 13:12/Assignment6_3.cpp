#include <stdio.h>
int main(){
	int n;
	printf("Nhập số lượng số: ");
	scanf("%d",&n);
	int ary[n];
	for(int i=0; i<n; i++){
		printf("Nhập vào số thứ %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++){
		if(ary[i]<0)
			ary[i]=0;
		printf("%d, ",ary[i]);
	}
return 0;
}