#include<stdio.h>

//Khai bao cau truc
struct Student{
		char fullName[50];
		int age;
		char phoneNumber[15];
		char email[50];
	};
	
// Nhap du lieu
int insert(struct Student *student){
	printf("Nhap ho va ten: ");
	gets(student->fullName);
	printf("Nhap tuoi: ");
	scanf("%d", &student->age);
	printf("Nhap so dien thoai ");
	scanf("%s", student->phoneNumber);
	printf("Nhap email ");
	scanf("%s", student ->email);
}

// Xuat du lieu
int print(struct Student student){
	printf("Ho va ten: %s\n", student.fullName);
	printf("Tuoi: %d\n", student.age);
	printf("So dien thoai: %s\n", student.phoneNumber);
	printf("Email: %s\n", student.email);
}
	
// Main
int main(){
	struct Student student;
	insert(&student);
	printf("\nThong tin sinh vien\n");
	print(student);
	return 0;
}
