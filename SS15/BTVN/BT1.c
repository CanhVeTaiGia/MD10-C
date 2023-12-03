	#include<stdio.h>

//main
int main(){
	struct Student{
		char fullName[50];
		int age;
		char phoneNumber[50];
		char email[50];
	};
	struct Student bo = {"Nguyen Van Bo", 18, "0947721353", "bo2005@gmail.com"};
	printf("Ho va ten: %s\n", bo.fullName);
	printf("Tuoi: %d\n", bo.age);
	printf("So dien thoai: %s\n", bo.phoneNumber);
	printf("email: %s\n", bo.email);
}
