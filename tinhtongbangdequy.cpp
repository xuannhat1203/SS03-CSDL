#include <stdio.h>
#include <stdlib.h>

int tinhtong(int *pArr, int n);

int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    int *pArr = NULL;
    pArr = (int *)malloc(n * sizeof(int));
    if (pArr == NULL) {
        printf("Bo nho chua duoc cap phat\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &pArr[i]);
    }

    printf("Tong là: %d\n", tinhtong(pArr, n));
    free(pArr); 
    return 0;
}
int tinhtong(int *pArr, int n) {
    if (n == 0) {
        return 0;
    }
    return pArr[n - 1] + tinhtong(pArr, n - 1); 
}

