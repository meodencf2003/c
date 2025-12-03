#include <stdio.h>

int main() {
    char a[100];

    printf("Nhap ho va ten:\n");
    fgets(a, sizeof(a), stdin);
    printf("ho va ten cua ban la:%s\n",a);

    return 0;
}

