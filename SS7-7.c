#include<stdio.h>
int main() {
    int n, i;
    printf("moi nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int numbers[n];
    for (i = 0; i < n; i++) {
        do {
            printf("moi nhap phan tu thu %d (la mot so le): ", i + 1);
            scanf("%d", &numbers[i]);
            if (numbers[i] % 2 == 0) {
                printf("phan tu khong hop le\n");
            }
        } while (numbers[i] % 2 == 0);
    }
        for (i = 0; i < n; i++) {
        	printf("%d ", numbers[i]);
		}
    return 0;
}
