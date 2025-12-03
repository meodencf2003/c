#include <stdio.h>

int main() {
    char c;
    printf("Nhap ky tu hoa: ");
    scanf(" %c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("Ky tu thuong: %c\n", c + 32);
    else
        printf("Khong phai ky tu hoa!\n");

    return 0;
}

