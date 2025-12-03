<<<<<<< HEAD
//comment ko cho trinh bien dich dich dong code nay
//include day goi la tien su ly (PREPROCESSOR). MUC DICH LA NHUNG THU VIEn standart input output(thu vien nhap xuat chuan) vao trong file thuc thi
#include <stdio.h>

//day lam ham main ma chuong trich thuc thi dau tien
int main(){
	//than ham
	//%d,%f,%tf,%c goi la dac ta dinh dang fomat secifier
	printf("xin chao\n");
	
	int tuoi = 23;
	printf("tuoi toi la: %d\n", tuoi);
	//%d in ra kieu so nguyen
	float tien_trong_tui = 10000;
	
	float diemtoan = 4.5;
	float diemanh = 5.5;
	float diemvan = 8.0;
	double diemtb;
	
	printf("diem toan: %f\n",diemtoan);
	printf("diem van: %f\n",diemvan);
	printf("diem anh: %f\n",diemanh);
	// %f in kieu so thuc
	
	//ham tinh diem trung binh
	diemtb = (diemtoan+diemvan+diemanh)/3;
	printf("diem trung binh la: %lf",diemtb);
	//lf kieu in cua double
	
	char kytu = 'A';
	printf("ki tu cua ban la: %c\n", kytu);
	
	//de nhap du lieu tu ban phim thi dung ham scanf
	int tong;
	int a;
	printf("nhap a:");
	scanf("%d",&a);
	//dau va & la toan tu dia chi dung de xac dinh gia tri cua bien a duoc lu o dau trong bo nho ram..
	printf("a=%d\n",a);
	
	int b;
	printf("nhap b:");
	scanf("%d",&b);
	printf("b=%d\n",b);
		
	
	tong = a + b;
	printf("tong cua a va b la: %d",tong);
	
	return 0;
}
=======
//comment ko cho trinh bien dich dich dong code nay
//include day goi la tien su ly (PREPROCESSOR). MUC DICH LA NHUNG THU VIEn standart input output(thu vien nhap xuat chuan) vao trong file thuc thi
#include <stdio.h>

//day lam ham main ma chuong trich thuc thi dau tien
int main(){
	//than ham
	//%d,%f,%tf,%c goi la dac ta dinh dang fomat secifier
	printf("xin chao\n");
	
	int tuoi = 23;
	printf("tuoi toi la: %d\n", tuoi);
	//%d in ra kieu so nguyen
	float tien_trong_tui = 10000;
	
	float diemtoan = 4.5;
	float diemanh = 5.5;
	float diemvan = 8.0;
	double diemtb;
	
	printf("diem toan: %f\n",diemtoan);
	printf("diem van: %f\n",diemvan);
	printf("diem anh: %f\n",diemanh);
	// %f in kieu so thuc
	
	//ham tinh diem trung binh
	diemtb = (diemtoan+diemvan+diemanh)/3;
	printf("diem trung binh la: %lf",diemtb);
	//lf kieu in cua double
	
	char kytu = 'A';
	printf("ki tu cua ban la: %c\n", kytu);
	
	//de nhap du lieu tu ban phim thi dung ham scanf
	int tong;
	int a;
	printf("nhap a:");
	scanf("%d",&a);
	//dau va & la toan tu dia chi dung de xac dinh gia tri cua bien a duoc lu o dau trong bo nho ram..
	printf("a=%d\n",a);
	
	int b;
	printf("nhap b:");
	scanf("%d",&b);
	printf("b=%d\n",b);
		
	
	tong = a + b;
	printf("tong cua a va b la: %d",tong);
	
	return 0;
}
>>>>>>> 8a200183c7d6e8992953ad4f07cd19f44a350cb7
