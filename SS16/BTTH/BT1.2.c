#include<stdio.h>

// Main
int main(){
	FILE *f = NULL;
	f = fopen("test.txt", "w");
	if(f != NULL){
		fputs("something", f); // Nhap chuoi bat ki
		fclose(f);
	}
	return 0;
}
