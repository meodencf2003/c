#include <stdio.h>

int main() {
    int a;

    printf("Nhap so nguyen: ");
    scanf("%d", &a);

    int binhPhuong = a * a;
    int lapPhuong = a * a * a;

    printf("Binh phuong: %d\n", binhPhuong);
    printf("Lap phuong : %d\n", lapPhuong);

    return 0;
}

