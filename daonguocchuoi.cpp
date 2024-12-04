#include <stdio.h>
#include <string.h>
void daonguoc(char str[], int start, int end) {
    if (start >= end) {
        return; 
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    daonguoc(str, start + 1, end - 1);
}

int main() {
    printf("Nhap chuoi co ky tu trang: ");
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("Chuoi vua nhap: %s\n", str);
    daonguoc(str, 0, strlen(str) - 1);
    printf("Chuoi dao nguoc: %s\n", str);
    return 0;
}

