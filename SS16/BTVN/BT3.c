#include<stdio.h>

// Main
int main(){
	FILE *f;
	int n;
	char s[50];
	f = fopen("E:\\Lm BT\\BT\\SS16\\BT03.txt", "w+");
	if(f == NULL){
		return 1;
	}
	printf("Nhap vao so dong: ");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
		printf("Dong thu %d: ", i);
		scanf(" %[^\n]", s);
		fprintf(f, "%s \n", s);
	}
	f = fopen("E:\\Lm BT\\BT\\SS16\\BT03.txt", "r+");
	if(f == NULL){
		return 1;
	}
	fprintf(f,"Noi dung:\n");
	for (int i = 1; i <= n; i++) {
		fgets(s, sizeof(s), f);
		fprintf(f,"Dong thu %d: %s\n", i, s);
	}
	fclose(f);
	return 0;
}
