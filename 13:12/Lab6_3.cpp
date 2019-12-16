#include <stdio.h>
int main(){
	int n=10,i;
	int ary[n];
	for(int i=0; i<n;i++){
		do{
			printf("Nhập vào số lẻ thứ %d : \n",i+1);
			scanf("%d",&ary[i]);
		}while(ary[i]%2==0);
	}
return 0;
}