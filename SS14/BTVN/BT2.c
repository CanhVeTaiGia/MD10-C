#include<stdio.h>

//Ham doi cho va tru
int swapNdiff(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Ham main
int main(){
	int a = 1;
	int b = 2;
	int *ptr1 = &a;
	int *ptr2 = &b;
	printf("%d\n", a-b);
	swapNdiff( &a, &b);
	printf("%d", a-b);
}
