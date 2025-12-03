#include <stdio.h>

int main() {
    int a, b = 0;

    printf("Nhap so nguyen: ");
    scanf("%d", &a);

    while (a != 0) {
        int c = a % 10;        
        b = b * 10 + c;        
        a /= 10;               
    }

    printf("So dao nguoc la: %d\n", b);

    return 0;
}

