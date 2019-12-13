#include <stdio.h>
int main(){
	int n,count=0;
	printf("Nhập vào số n: ");
	scanf("%d",&n);
	for(int i=2; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(i%j==0)
				count++;
			if(count==2)
				printf("%d, ",i);
			count=0;
			//Em làm chưa xong :((
		}
	}
return 0;
}