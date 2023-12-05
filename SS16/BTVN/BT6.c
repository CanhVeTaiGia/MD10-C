#include <stdio.h>

// Khai bao cau truc sinh vien
struct Student {
    char name[100];
    int age;
    char phoneNumber[20];
    char email[100];
};

// Main
int main() {
    FILE *f;
    int numStudents;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &numStudents);
    f = fopen("E:\\Lm BT\\BT\\SS16\\BTVN\\fileStudent.txt", "w");
    if (f == NULL) {
        printf("Loi khi mo file");
        return 1;
    }
    for (int i = 0; i < numStudents; i++) {
        struct Student student;
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("Ho va ten: ");
        scanf(" %[^\n]", student.name);
        printf("Tuoi: ");
        scanf("%d", &student.age);
        printf("So dien thoai: ");
        scanf(" %[^\n]", student.phoneNumber);
        printf("Email: ");
        scanf(" %[^\n]", student.email);
        fprintf(f, "%s %d %s %s\n", student.name, student.age, student.phoneNumber, student.email);
    }
    fclose(f);
    printf("Da ghi thong tin sinh vien vao fileStudents.txt.\n");
    return 0;
}

