#include<stdio.h>

// Main
int main(){
	FILE *f = NULL;
	int age = 0;
	f = fopen("text.txt", "w");
	if(f != NULL){
		printf("Tuoi la ");
		scanf("%s", &age);
		fprintf(f, "Nguoi dung dang %d tuoi", age);
	}
}
