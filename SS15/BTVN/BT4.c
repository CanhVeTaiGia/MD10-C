#include<stdio.h>
#include<stdlib.h>

// Khai bao cau truc sach
struct Books{
	int code;
	char title[50];
	char author[50];
	float price;
	char category[20];
};

// Khai bao mang cau truc sach
	int totalBooks = 0;

// In menu
printMenu(){
	printf("\nMenu\n");
	printf("1.Nhap so luong va thong tin sach\n");
	printf("2.Hien thi thong tin sach\n");
	printf("3.Them sach vao vi tri\n");
	printf("4.Xoa sach theo ma sach\n");
	printf("5.Cap nhat thong tin sach theo ma sach\n");
	printf("6.Sap xep sach theo gia\n");
	printf("7.Tim kiem sach theo ten\n");
	printf("8.Tim kiem sach theo bang gia\n");
	printf("9.Tim kiem sach theo Khoang gia\n");
	printf("10.Thoat\n");
	printf("Moi nhap:\n");
}

// Nhap sach voi so luong
void inputBooks(struct Book *b[]){
	printf("Nhap so luong sach: ");
	scanf("%d", &totalBooks);
	for(int i = 0; i < totalBooks; i++){
		printf("Nhap thong tin cho sach %d: \n",i + 1);
		b->code = i++;
		printf("Ma sach: %d\n" b->code);
		printf("Ten sach: ");
		scanf("%s", b->title);
		printf("Ten tac gia: ");
		scanf("%s", b->author);
		printf("Gia tien: ");
		scanf("%d", b->price);
		printf("The loai: ");
		scanf("%s", b->category);
	}
}

// Hien thi thong tin sach
void displayBooks(){
	printf("\nDanh sach sacnh:\n");
	for(int i = 0; i < n; i++){
		printf("%d\n", i + 1);
		printf("%s", book[i].tirtle);
		printf("%s", book[i].author);
		printf("%f", book[i].price);
		printf("%s", book[i].category);
	}
}

// Main
int main(){
	struct Book books[100];
	while(1){
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				input(books);
				break;
			case 2:
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
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long nhap tu 1-9\n")
		}
	}
}
