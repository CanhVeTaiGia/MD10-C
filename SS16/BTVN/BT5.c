#include<stdio.h>

// Main
int main(){
	FILE *f1, *f2, *des;
	char ch;
	f1 = fopen("E:\\Lm BT\\BT\\SS16\\BTVN\\fileBT1n2.txt", "r");
	if(f1 == NULL){
		return 1;
	}
	f2 = fopen("E:\\Lm BT\\BT\\SS16\\BTVN\\BT03.txt", "r");
	if(f2 == NULL){
		return 1;
	}
	des = fopen("E:\\Lm BT\\BT\\SS16\\BTVN\\fileBT5.txt", "w");
	if(des == NULL){
		fclose(f1);
		fclose(f2);
		return 1;
	}
	while((ch = fgetc(f1), ch) != EOF){
		fputc(ch, des);
	}
	while((ch = fgetc(f2), ch) != EOF){
		fputc(ch, des);
	}
	fclose(f1);
	fclose(f2);
	fclose(des);
	printf("Da sao chep nd bt1 va nd bt3 sang nd bt5\n");
	return 0;
}
