#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ary[n];
	int high = -10000,low=9999,lows=10000;
	for(int i=0;i<n;i++){
		printf("Nhập số thứ %d: ",i+1);
		scanf("%d",&ary[i]);
		if(ary[i]>high)
			high=ary[i];
		if(ary[i]<lows)
			lows=ary[i];
		if(ary[i]<high)
	}


return 0;
}