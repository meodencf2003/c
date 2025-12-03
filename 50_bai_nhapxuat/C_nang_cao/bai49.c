#include <stdio.h>

int main() {
    float f;
    printf("Nhap do F: ");
    scanf("%f", &f);

    float c = (f - 32) * 5 / 9;
    printf("Do C: %.2f\n", c);

    return 0;
}

