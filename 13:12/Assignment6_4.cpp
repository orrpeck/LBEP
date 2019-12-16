#include <stdio.h>
int main(){
	int n,memory=0;
	printf("Nhập số lượng số: ");
	scanf("%d",&n);
	int ary[n],ar[n];
	for(int i=0; i<n; i++){
		printf("Nhập vào số thứ %d: ",i+1);
		scanf("%d",&ary[i]);
		for(int j=0;j<i;j++){
			if(ary[i]==ary[j]){
				printf("Nhập lại số thứ %d: ",i+1);
				scanf("%d",&ary[i]);
				j=0;
			}
		}	
	}
	for(int i=0;i<n;i++)
		printf("Số thứ %d là %d \n",i+1,ary[i]);
return 0;
}