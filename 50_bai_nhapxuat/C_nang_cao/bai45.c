#include <stdio.h>

int main() {
    char s[200];
    printf("Nhap 1 cau: ");
    fgets(s, sizeof(s), stdin);

    printf("Cau ban vua nhap: %s", s);

    return 0;
}

