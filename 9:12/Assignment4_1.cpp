#include <stdio.h>
int main(){
	int n,n_giai_thua=1,i=1;
	printf("Nhập vào một số \n");
	scanf("%d",&n);
	while(i<=n){
		n_giai_thua=n_giai_thua*i;
		i++;
	}
	printf("n_giai_thua = %d\n",n_giai_thua);
return 0;
}