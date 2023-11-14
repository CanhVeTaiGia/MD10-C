#include<stdio.h>
int main(){
	for(int i=100;i<=999;i++){
		int u=i%10;
		int d=(i/10)%10;
		int h=i/100;
		if(i==h*h*h+d*d*d+u*u*u){
		printf("%d\n",i);
	   }
	}
}
