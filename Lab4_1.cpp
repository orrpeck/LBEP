#include <stdio.h>
int main(){
	float n, i=2, S=0;
	printf("Nhập vào n=\n");
	scanf("%f",&n);
	while(i<=n){
		S=1+1/i;
		i++;
	}
	printf("S = %f\n",S );

return 0;
}