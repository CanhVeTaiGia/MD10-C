#include<stdio.h>
int sum1(int a,int b){
	return a+b;
}
int sum2(int b,int c){
	return b+c; 
}
int sum3(int a,int c){
	return a+c;
}
int diff1(int a,int b){
	if(a>b){
		return a-b;
	}else
	return b-a;
}
int diff2(int b, int c){
	if(b>c){
		return b-c;
	}else
	return c-b;
}
int diff3(int a,int c){
	if(a>c){
		return a-c;
	} else
	return c-a;
}
int main(){
	int a,b,c;
	printf("Nhap 3 so\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Cap a va b la\n");
	if(a<b){
		printf("%d + %d = %d\n",a,b,sum1(a,b));
	}else{
		printf("%d + %d = %d\n",b,a,sum1(a,b));
	}
	if(a>b){
		printf("%d - %d = %d\n",a,b,diff1(a,b));
	}else{
		printf("%d - %d = %d\n",b,a,diff1(a,b));
	}
	printf("Cap b va c la\n");
	if(b<c){
		printf("%d + %d = %d\n",b,c,sum2(b,c));
	}else{
		printf("%d + %d = %d\n",c,b,sum2(b,c));
	}
	if(b>c){
		printf("%d - %d = %d\n",b,c,diff2(b,c));
	}else{
		printf("%d - %d = %d\n",c,b,diff2(b,c));
	}
	printf("Cap a va c la\n");
	if(a<c){
		printf("%d + %d = %d\n",a,c,sum3(a,c));
	}else{
		printf("%d + %d = %d\n",c,a,sum3(a,c));
	}
	if(a>c){
		printf("%d - %d = %d\n",a,c,diff3(a,c));
	}else{
		printf("%d - %d = %d\n",c,a,diff3(a,c));
	}
	return 0;
}
