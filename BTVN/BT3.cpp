#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    int low,high,found;
	int valueBinary;
    do {
        printf("\nMENU\n");
        printf("1. In gia tri cac phan tu cua mang\n");
        printf("2. Nhap gia tri tim kiem va su dung thuat toan tim kiem tuyen tinh\n");
        printf("3. Nhap gia tri tim kiem va su dung thuat toan tim kiem nhi phan\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang: ");
        int choice;
		scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Gia tri cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", mang[i]);
                }
                printf("\n");
                break;
            case 2:
                int valueLinear;
                printf("Nhap gia tri tim kiem: ");
                scanf("%d", &valueLinear);
                printf("Cac phan tu co gia tri bang %d la:\n", valueLinear);
                for (int i = 0; i < n; i++) {
                    if (mang[i] == valueLinear) {
                        printf("%d ", mang[i]);
                    }
                }
                printf("\n");
                break;
            case 3:
                
                printf("Nhap gia tri tim kiem: ");
                scanf("%d", &valueBinary);
                low = 0, high = n - 1, found = 0;
                while (low <= high) {
                    int mid = (low + high) / 2;
                    if (mang[mid] == valueBinary) {
                        printf("Phan tu co gia tri %d duoc tim thay tai vi tri %d.\n", valueBinary, mid);
                        found = 1;
                        break;
                    } else if (mang[mid] < valueBinary) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
                if (!found) {
                    printf("Phan tu co gia tri %d khong tim thay trong mang.\n", valueBinary);
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (1==1);

}

