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
bool timso(int a[], unsigned int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return true;
		}
	}
	return false;
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