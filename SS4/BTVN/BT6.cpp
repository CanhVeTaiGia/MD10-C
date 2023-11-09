#include<stdio.h>
int main(){
	int num1,num2,num3,mediable;
	printf("Nhap 3 so\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2){
		num2=mediable;
		num1=num2;
		mediable=num1;
	}
	if(num2>num3){
		num3=mediable;
		num1=num3;
		mediable=num1;
	}
	if(num2>num3){
		num3=mediable;
		num2=num3;
		mediable=num2;
	}
	printf("Day so giam dan: %d %d %d",num3,num2,num1);
}

