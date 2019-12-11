#include<stdio.h>
int main(){
	int a;
	int s=0;
	printf("\nNhập vào một số: ");
	scanf("%d", &a);
	if(a<2)
		printf("%d không phải số nguyên tố\n",a);
	else if(a==2)
		printf("%d là số nguyên tố\n",a);
	else{
	for (int i=2 ; i<=a ; i++){
		if(a%i==0)
	 		s=s+1;
	}
    	if(s==1)
			printf("%d là số nguyên tố \n",a);
		else
			printf("%d không phải là số nguyên tố \n",a);
	}
return 0;	
} 

