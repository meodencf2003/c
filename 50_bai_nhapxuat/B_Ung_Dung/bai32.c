#include <stdio.h>

int main() {
    float a, b;

    printf("Nhap can nang (kg): ");
    scanf("%f", &a);

    printf("Nhap chieu cao (m): ");
    scanf("%f", &b);

    float BMI = a / (b * b);

    printf("Chi so BMI cua ban la: %.2f\n", BMI);

    return 0;
}

