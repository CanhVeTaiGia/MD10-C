#include<stdio.h>
int main(){
	int day,month;
	printf("Nhap ngay va thang\n");
	scanf("%d %d",&day,&month);
 	if(month==2){
 		if(day<1 && day>29){
 			printf("Ngay %d thang %d khong hop le",day,month);
		 }
		 if(day<20){
		 	printf("Bao Binh");
		 } else
		 printf("Song Ngu");
	 } if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
	 	if(day<1 && day>31){
	 		printf("Ngay %d thang %d khong hop le",day,month);
		 }
		 if(month==1){
		 	if(day<20){
		 		printf("Ma ket");
			 } else
			 printf("Bao Binh");
		 }
		 if(month==3){
		 	if(day<21){
		 		printf("Song Ngu");
			 } else
			 printf("Bach Duong");
		 }
		 if(month==5){
		 	if(day<21){
		 		printf("Kim Nguu");
			 } else
			 printf("Song Tu");
		 }
		 if(month==7){
		 	if(day<23){
		 		printf("Cu Giai");
			 } else{
			 	printf("Su Tu");
			 }
		 }
		 if(month==8){
		 	if(day<23){
		 		printf("Su Tu");
			 } else
			 printf("Xu Nu");
		 }
		 if(month==10){
		 	if(day<24){
		 		printf("Thien Binh");
			 } else
			 printf("Bo Cap");
		 }
		 if(month==12){
		 	if(day<22){
		 		printf("Nhan Ma");
			 } else
			 printf("Ma Ket");
	 } if(month==4||month==6||month==9||month==11){
	 	if(day<1 && day>30){
	 		printf("Ngay %d thang %d khong hop le",day,month);
		 } if(month==4){
		 	if(day<21){
		 		printf("Song Ngu");
			 } else
			 printf("Bach Duong");
		 } if(month==6){
		 	if(day<22){
		 		printf("Song Tu");
			 } else
			 printf("Cu Giai");
		 } if(month==9){
		 	if(day<23){
		 		printf("Xu Nu");
			 } else
			 printf("Thien Binh");
		 } if(month==11){
		 	if(day<23){
		 		printf("Bo cap");
			 } else
			 printf("Nhan Ma");
		 }
	 }
}
}
