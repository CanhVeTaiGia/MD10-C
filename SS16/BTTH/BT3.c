#include<stdio.h>

// Main
int main(){
	FILE *f = NULL;
	const int maxSymbol = 100;
	char string[maxSymbol] = "";
	f = fopen("test.txt", "r");
	if(f != NULL){
		fgets(string, maxSymbol, f);
		printf("%s", f);
		fclose(f);
	}
	return 0;
}
