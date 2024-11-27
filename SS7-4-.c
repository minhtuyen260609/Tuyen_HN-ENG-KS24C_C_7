#include<stdio.h>
int main(){
	int i, n; 
		printf("moi nhap so phan tu cua mang: ");
		scanf("%d", &n); 
	int numbers[n];
	for(i=0; i<n; i++){
		printf("moi nhap phan tu thu %d: ", i+1);
		scanf("%d", &numbers[i]); 
	} 
	return 0; 
} 
