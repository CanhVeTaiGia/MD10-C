#include<stdio.h>
int main(){
	int accumulation,n;
	printf("Nhap n\n");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		accumulation=n*i;
		printf("%d * %d = %d\t\n",n,i,accumulation);
	}printf("\n"); 
	for(int i=1;i<=10;i++){ 
	printf("\n");
		for(int n=1;n<=10;n++){
			accumulation=n*i;
			printf("%d * %d = %d\t\n",n,i,accumulation);
		}
	}
}
