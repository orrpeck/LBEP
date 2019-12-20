#include <stdio.h>
void nhapn(int n){
	printf("Nhap vao n: ");
	scanf("%d",&n);
}
void nhapmang(int ary[],unsigned int n){
	for (int i = 0; i < n; ++i){
		printf("Nhap ary[%d]: ",i);
		scanf("%d",&ary[i]);
	}
}
void timso(int a[], unsigned int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			printf("So %d o vi tri thu %d \n",x,i);
			break;
		}else
			printf("Khong co so can tim trong mang.\n");

	}
}
int main(){
	int n;
	nhapn(n);
	int ary[n];
	nhapmang(ary,n);
	int x;
	printf("Nhap so can tim: ");
	scanf("%d",&x);
	timso(ary,n,x);
	return 0;
}