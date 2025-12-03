#include <stdio.h>

int main() {
    char a;

    printf("nhap ky tu: ");
    scanf(" %c", &a); 
    printf("ma ASCII cua ky tu '%c' la: %d", a, (int)a);

    return 0;
}

