#include<stdio.h>
int main(){
	int n[5]={1,7,3,7,5},i,a=0;
	for(i=0; i<5; i++){
		if(n[i]%2==0){
			printf("%d ", n[i]);
		}else if(n[i]%2!=0){
			a++; 
		}
	}
	if(a==5){ 
			printf("mang khong chua so chan");
	}
	return 0; 
} 
