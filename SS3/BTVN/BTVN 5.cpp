#include<stdio.h>
int main(){
	int n,thousand,hundred,dozen,unit;
	printf("Nhap vao cac gia tri:\n");
	scanf("%d",&n);
	unit = n%10;
	dozen = (n/10)%10;
	hundred = (n/100)%10;
	thousand = (n/1000)%10;
    int total = (unit + dozen + hundred + thousand);
    int reverse =(unit*1000 + dozen*100 + hundred*10 + thousand);
    printf("Tong cac hang la: %d\n",total);
	printf("Dao nguoc hang la: %d",reverse);
}
