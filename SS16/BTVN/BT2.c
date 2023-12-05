#include<stdio.h>

// Main
int main(){
	FILE *f = NULL;
	const maxSymb = 100;
	char string[maxSymb];
	f = fopen("E:\\Lm BT\\BT\\SS16\\BTVN\\fileBT1n2.txt", "r");
	if(f != NULL){
		fgets(string, maxSymb, f);
		printf("%s", string);
		fclose(f);
	}
	return 0;
}
