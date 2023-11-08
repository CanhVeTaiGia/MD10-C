#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Nhap vao cac gia tri:a, b, c, d\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
    int thousandDigit = a, hundredDigit = b, dozenDigit = c, unitDigit = d;
    int total = (a + b+ c + d);
    int reverse =(d*1000 + c*100 + b*10 + a);
    printf("Tong cac hang la: %d va Dao nguoc hang la: %d",total,reverse);
}
