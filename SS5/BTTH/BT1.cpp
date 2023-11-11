#include<stdio.h>
#include<math.h>
int main(){
	 int a,b,c;
	 printf("Nhap cac gia tri cua: a b c\n");
	 scanf("%d %d %d",&a,&b,&c);
	 float D = (b*b)-(4*a*c);
	 float x1=(-b+sqrt(D))/2*a,x2=(-b-sqrt(D))/2*a;
	 if(a==0){
	 	if(b==0){
	 		printf("Phuong trinh vo nghiem\n");
		 } else
		 printf("Phuong trinh co nghiem la %f\n",-c/b);
	 } else
	 if(D > 0){
	 	printf("Phuong trinh co 2 nghiem phan biet la %f va %f",x1,x2);
	 } else if(D==0){
	 	printf("Phuong trinh co 2 nghiem kep la %f\n");
	 } else
	 printf("Phuong trinh vo nghiem\n");
}
