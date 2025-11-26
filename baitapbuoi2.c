#include <stdio.h>

int main(){
	float Dtoan,Danh,Dvan;
	double Dtrungbinh;
	
	printf("nhap diem toan:\n");
	scanf("%f",&Dtoan);
	printf("nhap diem van:\n");
	scanf("%f",&Dvan);
	printf("nhap diem anh:\n");
	scanf("%f",&Danh);
	
	Dtrungbinh = (Dtoan+Danh+Dvan)/3;
	
	printf("diem trung binh cua ban la: %.13lf",Dtrungbinh);
	
	return 0;
}
