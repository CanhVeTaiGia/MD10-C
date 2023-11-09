#include<stdio.h>
int main(){
	int bS,aW,nW = 26;
	printf("Nhap luong co ban va so ngay cong thuc te:\n");
	scanf("%d %d",&bS,&aW);
	int salary = bS*(aW/nW),sD = salary + (salary*150/100);
	if(nW>aW){
		printf("%d",sD);
	}
	printf("%d",salary);
}
