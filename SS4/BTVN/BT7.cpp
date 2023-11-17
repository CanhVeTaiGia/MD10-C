#include<stdio.h>
int main(){
	int bs,aw,nw = 26;
	printf("Nhap luong co ban va so ngay cong thuc te:\n");
	scanf("%d %d",&bs,&aw);
	int salary = bS*(aw/nw),sd = salary + (salary*150/100);
	if(nw>aw){
		printf("%d",sd);
	}
	printf("%d",salary);
}
