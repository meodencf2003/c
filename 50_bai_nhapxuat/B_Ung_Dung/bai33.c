#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (a > b) {
        printf("So lon hon la: %d\n", a);
    } else {
        printf("So lon hon la: %d\n", b);
    }

    return 0;
}

