#include <stdio.h>
int main(){
	int ary[10];
	for(int i=0;i<10;i++){
		printf("Nhập vào số thứ %d: ",i+1);
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<10;i++){
		int e=0;
		for(;ary[i]!=0;){
			e=e*10+ary[i]%10;
			ary[i]/=10;
		}
		printf("Nghịch đảo %d \n",e);
	}
			
return 0;
}