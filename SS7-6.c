#include<stdio.h>
int main(){
	int n[5]={1,2,3,4,5},i,a=0;
	for(i=0; i<5; i++){
		if(n[i]%2==0){
			printf("%d ", n[i]+3);
		}else if(n[i]%2!=0){
			printf("%d ", n[i]+2);
		}
	}
	return 0; 
} 
