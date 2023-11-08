#include<stdio.h>
int main(){
	float math,literature,english;
	printf("Nhap diem 3 mon: toan van anh\n");
	scanf("%f %f %f",&math,&literature,&english);
	float total = math + literature + english,medium = total/3;
	printf("Diem tong toan van anh la: %.2f\n Diem trung binh la: %.2f\n",total,medium);
}
