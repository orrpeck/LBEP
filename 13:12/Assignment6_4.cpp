#include <stdio.h>
int main(){
	int n,memory=0;
	printf("Nhập số lượng số: ");
	scanf("%d",&n);
	int ary[n];
	for(int i=0; i<n; i++){
		do{
			printf("Nhập vào số thứ %d: ",i+1);
			scanf("%d",&ary[i]);
		}while(ary[i]==memory);
		memory=ary[i];
	}
return 0;
}