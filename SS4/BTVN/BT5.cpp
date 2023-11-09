#include<stdio.h>
int main(){
	int day,month,year;
	printf("Nhap ngay thang nam:");
	scanf("%d %d %d",&day,&month,&year);
	if (year>0){
		if( 1 >= month && month <= 12){
			if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
				if(1>=day && day<=31){
					printf("Ngay %d thang %d nam %d hop le",day,month,year);
				} else
				printf("Ngay %d thang %d nam %d khong hop le",day,month,year);
				} else if (month==2){
					if(year%400==0 || year%100==0){
						if(1>=day && day<=29){
							printf("Ngay %d thang %d nam %d hop le",day,month,year);
						} else printf("Ngay %d thang %d nam %d khong hop le",day,month,year);
					} else {
						if(1>=day && day<=28){
							printf("Ngay %d thang %d nam %d hop le",day,month,year);
						} else printf("Ngay %d thang %d nam %d khong hop le",day,month,year);
					}
				} else {
					if(1>=day && day<=30){
						printf("Ngay %d thang %d nam %d hop le",day,month,year);
					}else printf("Ngay %d thang %d nam %d khong hop le",day,month,year);
				}
			} else printf("Ngay %d thang %d nam %d khong hop le",day,month,year);
		} else printf("Ngay %d thang %d nam %d khong hop le",day,month,year);
	}
