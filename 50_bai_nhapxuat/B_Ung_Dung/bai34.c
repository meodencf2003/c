#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    int min = a;  

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    printf("So nho nhat la: %d\n", min);

    return 0;
}

