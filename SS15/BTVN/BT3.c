#include <stdio.h>
#include <stdlib.h>

// Khai bao thong tin sinh vien
struct Student
{
    char name[20];
    int age;
    int phoneNumber;
    char email[50];
};
typedef struct Student sv;

// Nhap thong tin sinh vien
void insert(sv *a, int i)
{
    printf("Nhap ten:: ");
    getchar();
    gets((a + i)->name);
    printf("Nhap tuoi: ");
    scanf("%d", &((a + i)->age));
    printf("Nhap so dien thoai: ");
    scanf("%d", &((a + i)->phoneNumber));
    printf("Nhap email ");
    getchar();
    gets((a + i)->email);
    printf("\n");
}

// In thong tin sinh vien
void print(sv *a, int i)
{
    printf("Cac thong tin ve hoc sinh thu %i la\n", i);
    printf("Ten: ");
    puts((a + i)->name);
    printf("\nTuoi: ");
    printf("%d\n", ((a + i)->age));
    printf("PhoneNumber: ");
    printf("%d\n", ((a + i)->phoneNumber));
    printf("Email la:");
    puts((a + i)->email);
    printf("\n");
}

// Xoa thong tin sinh vien
void delete(sv *a, int j, int count)
{
    for (int i = j; i < count; i++)
    {
        *(a + i) = *(a + i + 1);
    }
}

// Khai bao gioi han sinh vien va thong tin
struct Student student[100];

// Main
int main()
{
    int n, currentIndex = 0, index = 0, updateIndex = 0;
    do
    {
    	printf("Menu\n");
        printf("1.Nhap them sinh vien\n");
        printf("2.Sua\n");
        printf("3.Xoa\n");
        printf("4.In ra danh sach hoc sinh\n");
        printf("5.Thoat\n");
        int choice;
        printf("Moi ban nhap lua chon\n");
        scanf("%d", &choice);
        switch (choice)
        while(1){
        case 1:
            printf("Nhap so sinh vien muon them \n");
            getchar();
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                insert(student, currentIndex);
                currentIndex++;
            }
            break;
        case 2:
            printf("Nhap vi tri phan tu ban muon sua\n");
            scanf("%d",&updateIndex);
            if (updateIndex>=0 && updateIndex<currentIndex)
            {
                insert(&student, updateIndex);
            }
            else{
                printf("Vi tri ko hop le\n");
            }
            break;
        case 3:
            printf("Nhap vi tri phan tu muon xoa trong mang\n");
            scanf("%d", &index);
            if (index < currentIndex)
            {
                delete (student, index, currentIndex);
                currentIndex--;
            }
            else{
                printf("phan tu do ko ton tai\n");
            }
            break;
        case 4:
        	for (int i = 0; i < currentIndex; i++)
        	{
            print(student,i);
        	}
            break;
        case 5:
        	exit(0);
        default:
            printf("Moi nhap lai tu 1-5\n");
        }
    }
}
