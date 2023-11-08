#include<stdio.h>
int main(){
	int num1,num2,num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	int max = num1,min = num1;
	(max < num2)? num2:max;
	max = num2;
	(max < num3)? num3:max;
	max = num3;
	(min > num2)? num2:max;
	max = num2;
	(min > num3)? num3:max;
	max = num3;
	printf("Max: %d va Min: %d",max,min);
}
