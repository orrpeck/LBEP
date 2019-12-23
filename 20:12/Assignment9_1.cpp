#include <stdio.h>
#include <string.h>
bool ktchuoi(char a[][50],unsigned int c,char b[]){
	for (int i=0;i<c;i++){
 		int x=0,max=0;
 		for (int j=0;j<strlen(a[i]);j++){
 			if (a[i][j]==b[x]){
 				x++;
 				if (x>max){
 					max=x;
 				}
 			}else{
 				x=0;
 			}
 		}
 		if(max==strlen(b)){
 			return true;
 		}
 	}
 	return false;
}
int main (){
int n;
	printf("Nhap so luong chuoi n: ");
	scanf("%d",&n);
 	char a[n][50];
 	for(int i=0;i<n;i++){
 		printf("Nhap chuoi thu %d: ",i+1);
 		scanf("%s",a[i]);
 	}
 	char s[50];
 	printf("Nhap chuoi s can kiem tra: ");
 	scanf("%s",s);
 	if(ktchuoi(a,n,s)){
 		printf("Chuoi s co nam trong mang.");
 	}else {
 		printf("chuoi s khong nam trong mang.");
 	}
 	return 0;
}