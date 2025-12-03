#include <stdio.h>

int main() {
    int s;


    printf("Nhap so giay: ");
    scanf("%d", &s);
    
    int h = s / 3600;
    int p = (s % 3600) / 60;
    int giay = s % 60;
    
    printf("%02d gio %02d phut %02d giay \n",h,p,giay );

    return 0;
}

