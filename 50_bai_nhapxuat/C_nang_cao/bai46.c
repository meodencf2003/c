#include <stdio.h>

int main() {
    char name[50];
    int age;
    float gpa;

    printf("Nhap ten: ");
    scanf(" %49[^\n]", name);

    printf("Nhap tuoi: ");
    scanf("%d", &age);

    printf("Nhap diem TB: ");
    scanf("%f", &gpa);

    printf("\n===== THONG TIN SINH VIEN =====\n");
    printf("Ten      : %s\n", name);
    printf("Tuoi     : %d\n", age);
    printf("Diem TB  : %.2f\n", gpa);

    return 0;
}

