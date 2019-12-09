#include <stdio.h>
int main(){
	int S=0,i=1;
	while(i<=100){
		while(i%2==1){
		S=S+i;
		i++;
		}
	i++;
	}
printf("S = %d\n",S);
return 0;
}