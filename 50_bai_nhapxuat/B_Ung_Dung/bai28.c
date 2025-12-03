#include <stdio.h>

int main() {
    char a;

    printf("Nhap ky tu: ");
    scanf(" %c", &a);
	++a; 
    printf("Ky tu lien sau la: %c",a);

    return 0;
}

