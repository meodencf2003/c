//thu vien  stdio<thu vien nhap xuat cua c>
#include "stdio.h" 

int main(){
	
	//printf dung de in du lieu co dinh dang
	//printf("hi\n");
	// \n dung de xuong dong
	//printf("hi\n");
	
	//nhap 2 so nguyen a,b va tinh tong cua chung
	int a,b; //int kieu so nguyen
	printf("nhap a:");
	scanf("%d", &a);
	printf("nhap b:");
	scanf("%d", &b);
	
	int tong = a + b;
    printf("Tong = %d", tong);
    
	return 0;
}

