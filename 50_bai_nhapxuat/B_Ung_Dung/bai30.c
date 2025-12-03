#include <stdio.h>

int main() {
    int gio, phut;

    printf("Nhap so gio: ");
    scanf("%d", &gio);

    printf("Nhap so phut: ");
    scanf("%d", &phut);

    int tongPhut = gio * 60 + phut;

    printf("Tong so phut la: %d\n", tongPhut);

    return 0;
}

