#include<stdio.h>
int main(){
	int taxes,dA,tEI,aTI;
	printf("Nhap tong thu nhap nhan vien va tien giam tru\n");
	scanf("%d %d",&tEI,&dA);
	if(tEI>80){
		taxes=35;
		dA=(tEI*taxes)/100;
		aTI=tEI-dA;
		printf("Thue thu nhap la %d va luong rong la %d trieu",taxes,aTI);
	} else if(tEI<=80 && tEI>52){
		taxes=30;
		dA=(tEI*taxes)/100;
		aTI=tEI-dA;
		printf("Thue thu nhap la %d va luong rong la %d trieu",taxes,aTI);
	} else if(tEI<=52 && tEI>32){
		taxes=25;
		dA=(tEI*taxes)/100;
		aTI=tEI-dA;
		printf("Thue thu nhap la %d va Luong rong la %d trieu",taxes,aTI);
	} else if(tEI<=32 && tEI>18){
		taxes=20;
		dA=(tEI*taxes)/100;
		aTI=tEI-dA;
		printf("Thue thu nhap la %d va luong rong la %d trieu",taxes,aTI);
	} else if(tEI<=18 && tEI>10){
		taxes=15;
		dA=(tEI*taxes)/100;
		aTI=tEI-dA;
		printf("Thue thu nhap la %d va luong rong la %d trieu",taxes,aTI);
	} else if(tEI<=10 && tEI>5){
		taxes=10;
		dA=(tEI*taxes)/100;
		aTI=tEI-dA;
		printf("Thue thu nhap la %d va luong rong la %d",taxes,aTI);
	} else
		taxes=5;
		dA=(tEI*taxes)/100;
		aTI=tEI-dA;
	
}
