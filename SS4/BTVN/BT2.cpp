#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap ba so: a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && a==c){
		printf("Canh a,b,c tao nen tam giac deu");
	} else if( a==b || b==c || a==c ){
		if((a^2) + (b^2) == (c^2) || (a^2) + (c^2) == (b^2) || (b^2) + (c^2) == (a^2)){
		printf("Canh a,b,c tao nen tam giac vuong can");}
		else
		printf("Canh a,b,c tao nen tam giac can");
	} else if((a^2) + (b^2) == (c^2) || (a^2) + (c^2) == (b^2) || (b^2) + (c^2) == (a^2)){
		printf("Canh a,b,c tao nen tam giac vuong");
	} else if( a+b>c && b+c>a && a+c>b){
	    printf("Canh a,b,c tao nen tam giac thuong");
	} else printf("Canh a,b,c khong tao nen tam giac");
}
