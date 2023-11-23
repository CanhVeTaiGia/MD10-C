#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void nhapMaTran(int arr[][100],int n,int m) {
    printf("Nhap gia tri cac phan tu cua ma tran:\n");
    int i;
    for (i=0;i<n;i++) {
    	int j;
        for(j=0;j<m;j++) {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void inMaTran(int arr[][100], int n, int m) {
    printf("Gia tri cac phan tu cua ma tran:\n");
    int i;
    for (i=0;i<n;i++){
    	int j;
        for(j=0;j<m;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void inGoc(int arr[][100], int n, int m) {
    printf("Cac phan tu o goc cua ma tran:\n");
    printf("%d %d %d %d\n", arr[0][0], arr[0][m-1], arr[n-1][0], arr[n-1][m-1]);
}
void inDuongBien(int arr[][100],int n,int m) {
    printf("Cac phan tu tren duong bien cua ma tran:\n");
    int i;
    for(i=0;i<n;i++){
    	int j;
        for(j=0;j<m;j++) {
            if (i==0 || i==n-1 || j==0 || j==m-1) {
                printf("%d",arr[i][j]);
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
}
void inDuongCheo(int arr[][100],int n,int m) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu cua ma tran:\n");
    int i;
    for(i=0;i<n;i++){
    	int j;
        for(j=0;j<m;j++) {
            if (i==j || i+j==m-1) {
                printf("%d",arr[i][j]);
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
}
int laSoNguyenTo(int num) {
    if (num<2) {
        return 0;
    }
    int i;
    for(i=2;i<=sqrt(num);i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}
void inSoNguyenTo(int arr[][100],int n,int m) {
    printf("Cac phan tu la so nguyen to cua ma tran:\n");
    int i;
    for(i=0;i<n;i++){
    	int j;
        for(j=0;j<m;j++) {
            if (laSoNguyenTo(arr[i][j])) {
                printf("%d",arr[i][j]);
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
}
int main() {
    int arr[100][100];
    int n,m;
    int choice;
    printf("Nhap so hang n: ");
    scanf("%d",&n);
    printf("Nhap so cot m: ");
    scanf("%d",&m);
    do {
        printf("\nMENU\n");
        printf("1.Nhap gia tri cac phan tu cua mang\n");
        printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3.In ra cac phan tu o goc theo ma tran\n");
        printf("4.In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5.In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6.In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7.Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                nhapMaTran(arr,n,m);
                break;
            case 2:
                inMaTran(arr,n,m);
                break;
            case 3:
                inGoc(arr,n,m);
                break;
            case 4:
                inDuongBien(arr,n,m);
                break;
            case 5:
                inDuongCheo(arr,n,m);
                break;
            case 6:
                inSoNguyenTo(arr,n,m);
                break;
            case 7:
                exit(0);
            default:
                printf("Vui long chon tu 1-7\n");
        }
    } while(1==1);
    return 0;
}

