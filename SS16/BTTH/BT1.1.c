#include<stdio.h>

// Main
int main(){
	FILE *f = NULL;
	f = fopen("test.txt", "w");
	if(f != NULL){
		fputc('A', f);
		fclose(f);
	}
	return 0;
}
