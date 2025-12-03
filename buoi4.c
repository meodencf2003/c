#include <stdio.h>
#include <stdbool.h>

int main(){
//	int x =6S;
//	printf("%d\n",x<5 && x >10);
//	printf("%d\n",x<5 || x >10);
//	printf("%d\n",!(x<5 || x >10);
//
//	bool isHandsome = false;
////	printf("%d",isHandsome);
//	
//	int x=5;
////	if(x>10){
////		//khoi co de nay thuc hien khi du dieu kien tren la true
////		printf("x>10");
////		
////	}
////	printf("x<10");
//	int a;
//	printf("nhap so nguyen:");
//	scanf("%d",&a);
//	
//	if(a < 0){
//		if(a%2==0){
//			printf("%d la so chan",a);
//		}else{
//			printf("%d la so le",a);
//		}
//		
//	}else{
//		printf("gia tri khong hop le");
//	}
//	
//	float a,b;
//	printf("nhap a:");
//	scanf("%f",&a);
//	printf("nhap b:");
//	scanf("%f",&b);
//	if(a == 0){
//		if(b != 0){
//			printf("phuong trinh vo nghiem");
//		}else{
//			printf("phuong trinh co vo so nghiem");
//		}
//	}else{
//		float x = -b/a;
//		printf("nghiem cua phuong trinh la x= %.2f",x);
//	}
//	
//	if(a = 0 && b != 0 ){
//		printf("phuong trinh vo nghiem");
//	}else if(a == 0 && b == 0){
//		printf("phuong trinh co vo so nghiem");
//	}else{
//		float x=-b/a;
//		printf("nghiem cua phuong trinh la x= %2f",x);
//	}
	int a,b,max;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
//		max = a;
//	if(b > a){
//		b = max;		
//	}
max =(b > a) ? b:a;//cu pha short hand cua if dieu kien co the viet la chi co 1 if (toan tu 3 ngoi)
	printf("no lon nhat la: %d",max);
	
	
	return 0;
}
