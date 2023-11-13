#include<stdio.h>
int main(){
	int accumulation,n,i;
	printf("Nhap n\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		accumulation=n*i;
		printf("%d * %d = %d\t\n",n,i,accumulation);
	}printf("\n"); 
	for(i=1;i<=10;i++){ 
	printf("\n");
		for(n=1;n<=10;n++){
			accumulation=n*i;
			printf("%d * %d = %d\t\n",n,i,accumulation);
		}
	}
}
