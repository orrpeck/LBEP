#include <stdio.h>
int main(){
	int n;
	printf("Nhập vào n: ");
	scanf("%d",&n);
	int data[n];
	for(int i=0;i<n;i++){
		printf("Nhập vào số thứ %d: ",i+1);
		scanf("%d",&data[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(data[j]>data[j+1]){
				int temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
	int x,low=0,high=n,flag=0;
	printf("Nhập số cần tìm: ");
	scanf("%d",&x);
	while(low<high){
		int mid=low+(high-low)/2;
		if(x==data[mid]){
			printf("Số cần tìm ở vị trí %d \n",mid);
			flag++;
			break;
		}else if(x<data[mid])
			high=mid-1;
		else if(x>data[mid])
			low=mid+1;
	}
	if(flag==0)
		printf("Không có giá trị cần tìm ở trong mảng!\n");
return 0;
}