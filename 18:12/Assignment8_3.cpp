#include <stdio.h>
int timmax(int a[][4],unsigned int n){
	int max=0,hang=0;
	for(int i=0;i<4;i++){
		int total=0;
		for(int j=0;j<4;j++){
			total+=a[i][j];
		}
		if(i==0){
			max=total;
		}
		if (total>max){
			max=total;
			hang=i;
		}
	}
	return hang;
}
int main(){
	return 0;
}