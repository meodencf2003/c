#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Nhap so a: ");
    scanf("%f", &a);

    printf("Nhap toan tu (+ - * /): ");
    scanf(" %c", &op);

    printf("Nhap so b: ");
    scanf("%f", &b);

    float kq;

    switch (op) {
        case '+': kq = a + b; break;
        case '-': kq = a - b; break;
        case '*': kq = a * b; break;
        case '/': 
            if (b == 0) {
                printf("Loi: Khong the chia cho 0!\n");
                return 0;
            }
            kq = a / b;
            break;
        default:
            printf("Toan tu khong hop le!\n");
            return 0;
    }

    printf("Ket qua: %.2f\n", kq);

    return 0;
}
S
