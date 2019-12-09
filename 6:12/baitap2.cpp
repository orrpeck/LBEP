#include <stdio.h>
int main(){
	int x;
	printf("Nhập vào một số nguyên \n");
	scanf("%d",&x);
	if(x==2){
		printf("Thứ 2 \n");
	}else if(x==3){
		printf("Thứ 3 \n");
	}else if(x==4){
		printf("Thứ 4 \n");
	}else if(x==5){
		printf("Thứ 5 \n");
	}else if(x==6){
		printf("Thứ 6 \n");
	}else if(x==7){
		printf("Thứ 7 \n");
	}else if(x==8){
		printf("Chủ nhật \n");
	}else{
		printf("Không phải ngày trong tuần\n");
	}
	return 0;

}