#include <stdio.h>

int main() {
    int a;
	
    printf("Nhap so nguyen co 3 chu so:\n ");
    scanf("%d", &a);
    int b = a/100;
    int c = (a / 10) % 10;
    int d = a/100;
    printf("hang tram %d\n hang chuc: %d\n hang don vi: %d",d,b,c);
    return 0;
}

