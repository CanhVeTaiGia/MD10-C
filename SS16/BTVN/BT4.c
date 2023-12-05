#include<stdio.h>

// Main
int main(){
	FILE *f;
	char string[50];
	int col = 0;
	f = fopen("E:\\Lm BT\\BT\\SS16\\BTVN\\BT03.txt", "r");
	if(f == NULL){
		printf("Loi khi mo file\n");
		return 1;
	}
	printf("File co noi dung\n");
	while(fgets(string, sizeof(string), f) != NULL){
		printf("%s", string);
		col++;
	}
	printf("%d", col);
	return 0;
}
