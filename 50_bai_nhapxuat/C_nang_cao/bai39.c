#include <stdio.h>

int main() {
    int a;
	
    printf("Nhap so nguyen co 2 chu so:\n ");
    scanf("%d", &a);
    int b = a/10;
    int c = a%10;
    printf("hang chuc: %d\n hang don vi: %d",b,c);
    return 0;
}

