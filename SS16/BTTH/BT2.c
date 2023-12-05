#include<stdio.h>

// Main
int main(){
	FILE *f = NULL;
	int currentSymb = 0;
	f = fopen("Text.txt", "r");
	if(f != NULL){
		while(currentSymb != EOF){
			currentSymb = fgetc(f);
			printf("%c", f);
		}
		fclose(f);
	}
	return 0;
}
