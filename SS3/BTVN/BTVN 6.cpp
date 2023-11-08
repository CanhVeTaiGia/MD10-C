#include<stdio.h>
int main(){
	int birthDate;
	printf("Nhap nam sinh: ");
	scanf("%d",&birthDate);
	int yearOld = 2023 - birthDate;
	printf("Tuoi cua ban la: %d\n",yearOld);
 if (yearOld%2)
 printf("Tuoi vua nhap vao la so le");
 else
 printf("Tuoi vua nhap vao la so chan");
}
