#include<stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c,s;
	int max=a,min=a;
	printf("Nhap 3 so nguyen: a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	do{
		printf("1.Tong ba so nguyen\n");
		printf("2.Trung binh cong cua 3 so\n");
		printf("3.So lon nhat,so nho nhat\n");
		printf("4.Thoat\n");
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			s=a+b+c;
			printf("Tong la: %d",s);
			break;
		case 2:
			s=(a+b+c)/3;
			printf("Trung binh cua 3 so la: %d",s);
			break;
		case 3:
			if(max<b){
			max=b;
			}
			if(max<c){
			max=c;
			}
			if(min>b){
			min = b;
			}
			if(min>c){
			min=c;
			}
			printf("Max: %d va Min: %d",max,min);
			break;
		case 4:
			exit(0);
		default:
			printf("Vui long chon tu 1-4");
		}
	}while("Vui long chon tu 1-4");
}
