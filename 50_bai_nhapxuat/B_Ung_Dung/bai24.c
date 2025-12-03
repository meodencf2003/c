#include <stdio.h>

int main() {
    int a, b;
	float c;
    printf("Nhap diem toan:\n");
    scanf("%d", &a);
    printf("Nhap diem ly:\n");
    scanf("%d", &b);
    printf("Nhap diem hoa:\n");
    scanf("%f", &c);

    printf("diem trung binh cua ban la: %f", (a+b+c)/3);

    return 0;
}

