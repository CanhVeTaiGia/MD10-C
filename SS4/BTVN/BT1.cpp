#include<stdio.h>
int main(){
	int num;
	printf("Nhap so nguyen:");
	scanf("%d",&num);
	if(num%3==0 && num%5==0){
		printf("%d chia het cho ca 3 va 5",num);
	}
}
