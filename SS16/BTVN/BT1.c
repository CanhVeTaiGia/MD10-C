#include<stdio.h>

// Main
int main(){
	FILE *f = NULL;
	char random[50];
	f = fopen("E:\\Lm BT\\BT\\SS16\\BTVN\\fileBT1n2.txt", "w+");
	if(f != NULL){
		printf("Moi nhap ");
		scanf("%s", random);
		fprintf(f, "%s", random);
		fclose(f);
	}
}
