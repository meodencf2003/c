#include <stdio.h>

int main() {
    char a[100];

    printf("Ten cua ban:\n");
    fgets(a, sizeof(a), stdin);   
    printf("Ten cua ban la: %s", a);

    return 0;
}
