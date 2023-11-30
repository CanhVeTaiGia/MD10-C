#include<stdio.h>

//Ham main
int main(){
	int a;
	int *ptr = &a;
	printf("Moi nhap\n");
	scanf("%d", &a);
	printf("%d", a);
	printf("\nMoi nhap\n");
	scanf("%d", ptr);
	printf("%d", *ptr);
}
