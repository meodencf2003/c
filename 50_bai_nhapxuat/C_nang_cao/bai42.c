#include <stdio.h>

int main() {
    char c;
    printf("Nhap ky tu thuong: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z')
        printf("Ky tu hoa: %c\n", c - 32);
    else
        printf("Khong phai ky tu thuong!\n");

    return 0;
}

