#include <stdio.h>

int main() {
    float c;
    printf("Nhap do C: ");
    scanf("%f", &c);

    float f = c * 9 / 5 + 32;
    printf("Do F: %.2f\n", f);

    return 0;
}

