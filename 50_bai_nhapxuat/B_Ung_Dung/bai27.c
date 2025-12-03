#include <stdio.h>

int main() {
    int a;

    printf("Nhap so nguyen: ");
    scanf(" %d", &a);   

    printf("Ma ASCII cua ky tu '%d' la: %c", a, (char)a);

    return 0;
}

