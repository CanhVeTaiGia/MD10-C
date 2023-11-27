#include <stdio.h>
#include <string.h>
//Main
int main() {
    char inputString[100];
    printf("Nhap vao 1 chuoi: ");
    gets(inputString);
    int frequency[256] = {0};
    for (int i = 0; i < strlen(inputString); i++) {
        frequency[(int)inputString[i]]++;
    }
    printf("So lan xuat hien cua mot ki tu trong chuoi:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", (char)i, frequency[i]);
        }
    }
    return 0;
}

