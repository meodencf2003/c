#include <stdio.h>

int main() {
    float a, b, c;
	char d[100];
	printf("nhap ten ban:\n");
	scanf("%s",&d);
    printf("Nhap diem toan:\n");
    scanf("%f", &a);
    printf("Nhap diem ly:\n");
    scanf("%f", &b);
    printf("Nhap diem hoa:\n");
    scanf("%f", &c);

    printf("ban %s co diem trung binh cua ban la: %f",d, (a+b+c)/3);

    return 0;
}

