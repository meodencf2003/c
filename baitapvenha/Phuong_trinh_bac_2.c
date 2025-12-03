#include <stdio.h>
#include <math.h> //thu vien dùng sqrt() can bac 2

int main(){
    double a, b, c;
    double x1, x2;

    printf("nhap a: ");
    scanf("%lf", &a);
    printf("nhap b: ");
    scanf("%lf", &b);
    printf("nhap c: ");
    scanf("%lf", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            printf("Phuong trinh bac 1, nghiem x = %lf\n", -c/b);
        }
        return 0;
    }

    double D = b*b - 4*a*c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    }
    else if (D == 0) {
        x1 = -b / (2*a);
        printf("Phuong trinh co nghiem kep x = %lf\n", x1);
    }
    else {
        printf("Phuong trinh vo nghiem\n");
    }

    return 0;
}

