#include<stdio.h>
int main(){
	float r;
	const float PI = 3.14;
	printf("Nhap gia tri ban kinh: ");
	scanf("%f",&r);
	float p = 2 * PI * r,s = PI * r * r;
	printf("Hinh tron co chu vi: %.2f va dien tich: %.2f",p,s);
}
