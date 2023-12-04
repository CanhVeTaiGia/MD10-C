#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Khai bao cau truc mang
struct SinhVien{
	int id;
	char name[50];
	char birthday[50];
	char address[50];
	int status;
};

// In menu
void printMenu(){
	printf("Menu\n");
	printf("1.In toan bo danh sach sinh vien co trong mang\n");
	printf("2.Them moi sinh vien vao vi tri cuoi cung cua studentList\n");
	printf("3.Cap nhat thong tin cua mot sinh vien\n");
	printf("4.Xoa sinh vien\n");
	printf("5.Sap xep va in ra danh sach studentList da duoc sap xep\n");
	printf("6.Tim kiem va in ra thong tin sinh vien\n");
	printf("7.Tim kiem va in ra thong tin sinh vien theo status\n");
	printf("8.Thoat\n");
	printf("Moi nhap tu 1-8\n");
}

// In toan bo danh sach sinh vien co trong mang
void display(struct SinhVien studentList[], int size, int currentSize){
	printf("Id\t\t");
	printf("Ten\t\t");
	printf("Ngay sinh\t\t");
	printf("Dia chi\t\t");
	printf("\n");
	currentSize = 0;
	for(int i = 0; i < size; i++){
		printf("%d\t", i + 1);
		studentList + 1;
		printf("%s\t\t", studentList[currentSize].name);
		printf("%s\t" ,studentList[currentSize].birthday);
		printf("%s\t", studentList[currentSize].address);
		printf("%d\t", studentList[currentSize].status);
		printf("\n");
		currentSize++;
	}
}

//

// Main
int main(){
	struct SinhVien sv1 = {1, "Nguyen Van Bo", "20/05/2005", "Ha Noi", 1};
	struct SinhVien sv2 = {2, "Ha Van Khang", "21/07/2004", "Nghe An", 0};
	struct SinhVien studentList[100] = {sv1, sv2};
	int currentSize = 99;
	int size = 100;
	int choice;
	struct SinhVien newStudents[100];
	while(choice != 8){
		printMenu();
		scanf("%d",&choice);
		switch (choice){
			case 1:
				display(studentList, size, currentSize);
				break;
			case 2:
				printf("Id: %d\n", currentSize + 1);
				fflush(stdin);
				printf("Ten sinh vien: ");
				gets(newStudents[currentSize].name);
				printf("Ngay sinh: ");
				gets(newStudents[currentSize].birthday);
				printf("Dia chi: ");
				gets(newStudents[currentSize].address);
				printf("Trang thai: %d\n", 1 || 0);
				currentSize--;
				break;
			case 3:
				
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			default:
				if(choice = 8){
					printf("Thanks for using this MF\n");
				}
				else{
					printf("Nuh uh, Nice try kids");
				}
		}
	}
}
