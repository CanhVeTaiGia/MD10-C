#include<stdio.h>

//Ham do do dai
int strLength(char *string){
	const char *ptr = string;
	while(*ptr != '\0'){
		ptr++;
	}
	return ptr - string;
}

//Ham main
int main(){
	char str1[100], str2[100];
	printf("Nhap chuoi 1:\n");
	gets(str1);
	printf("Nhap chuoi 2:\n");
	gets(str2);
	int str1Length = strLength(str1);
	int str2Length = strLength(str2);
	printf("Do dai chuoi 1 la %d\n", str1Length);
	printf("Do dai chuoi 2 la %d\n", str2Length);
	if(str1Length < str2Length){
		printf("Chuoi 2 co do dai lon hon\n");
		printf("%s\n", str2);
	} else if(str1Length > str2Length){
		printf("Chuoi 1 co do dai lon hon\n");
		printf("%s\n", str1);
	} else{
		printf("Hai chuoi co do dai bang nhau\n");
		printf("%s\n%s", str1, str2);
	}
	return 0;
}
