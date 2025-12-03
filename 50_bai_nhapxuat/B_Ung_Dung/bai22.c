#include <stdio.h>

int main() {
    float a;
    float b = 3.14159265;

    printf("Nhap ban kinh hinh trong:\n");
    scanf("%f", &a);

    printf("dien tich cua hinh tron la: %f", b*a*a);

    return 0;
}

