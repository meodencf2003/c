#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap canh ben 1:\n");
    scanf("%f", &a);

    printf("Nhap canh ben 2:\n");
    scanf("%f", &b);

    printf("Nhap canh day:\n");
    scanf("%f", &c);
	float p = (a+b+c)/2;
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("dien tam giac la: %f\n",S );

    return 0;
}

