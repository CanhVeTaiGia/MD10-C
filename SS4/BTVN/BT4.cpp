#include<stdio.h>
int main(){
	int year,month;
	printf("Nhap thang va nam:\n");
	scanf("%d %d",&month,&year);,
	switch(month){
		case 1:
			printf("Thang co 31 ngay");
			break;
		case 4:
			printf("Thang co 30 ngay");
			break;
		case 2:
			if(year%4==0 || year%400==0){
				printf("Thang co 29 ngay");
			} else
				printf("thang co 28 ngay");
				break;
		case 3:
			printf("Thang co 31 ngay");
			break;
		case 5:
			printf("Thang co 31 ngay");
			break;
		case 7:
			printf("Thang co 31 ngay");
			break;
		case 8:
			printf("Thang co 31 ngay");
			break;
		case 10:
			printf("Thang co 31 ngay");
			break;
		case 12:
			printf("Thang co 31 ngay");
			break;
		case 6:
			printf("Thang co 30 ngay");
			break;
		case 9:
			printf("Thang co 30 ngay");
			break;
		case 11:
			printf("Thang co 30 ngay");
			break;
	}
}
