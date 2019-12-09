#include <stdio.h>
int main(){
	float n, i=1, S=0;
	printf("Nhập vào n=\n");
	scanf("%f",&n);
	while(i<=n){

		S=S+1/i;
		i++;
	}
	printf("S = %f\n",S );

return 0;
}