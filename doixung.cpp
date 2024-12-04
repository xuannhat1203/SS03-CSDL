#include <stdio.h>
#include <string.h>

int kiemtra(char str[], int start, int end) {
    if (start >= end) {
        return 1; 
    }
    if (str[start] != str[end]) {
        return 0; 
    }
    return kiemtra(str, start + 1, end - 1);
}

int main() {
    printf("Nhap chuoi co ky tu trang: ");
    char str[100];
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (kiemtra(str, 0, strlen(str) - 1)) {
        printf("Chuoi doi xung.\n");
    } else {
        printf("Chuoi khong doi xung.\n");
    }
    return 0;
}

