#include<stdio.h>
int main(){
	int iOld,iNew;
	printf("Nhap so dien moi va cu:\n");
	scanf("%d %d",&iNew,&iOld);
	if(iOld>iNew){
		printf("Loi !!! Xin vui long nhap lai\n");
		printf("Nhap so dien moi va cu:\n");
		scanf("%d %d",&iNew,&iOld);
	}
	int eNum = iNew - iOld;
	if(eNum < 200){
		if(eNum < 150){
			if(eNum < 100){
				if(eNum < 50){
					printf("Gia tien dien la: %d VND",30*10000);
				}
				printf("Gia dien la: %d VND",30*15000);
			} else
			printf("Gia tien dien la: %d VND",30*20000);
		} else
		printf("Gia tien dien la: %d VND",30*25000);	
	} else
	printf("Gia tien dien la: %d VND",30*30000);
}
