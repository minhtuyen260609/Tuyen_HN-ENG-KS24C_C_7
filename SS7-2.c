#include<stdio.h>
int main(){
	int n[5], i; 
	for(i=0; i<5; i++){
		printf("moi nhap phan tu thu %d cua mang: ", i+1);
		scanf("%d",&n[i]); 
	} 
	printf("cac phan tu cua mang la: %d, %d, %d, %d, %d", n[0], n[1], n[2], n[3], n[4]);
	return 0; 
} 
