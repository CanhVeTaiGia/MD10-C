#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,m ;	
	int sum;
	int key;
	printf("Nhap so dong va cot\n");
	scanf("%d %d",&n,&m);
	int num[n][m];
	do{
	printf("								Menu\n");
	printf("1.Nhap cac gia tri cac phan tu trong mang\n");
	printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
	printf("3.Tinh so luong cac phan tu so le chia het cho 5\n");
	printf("4.In ra cac phan tu co gia tri lon nhat, nho nhat nam tren duong bien, duong cheo chinh,duong cheo phu\n");
	printf("5.Su dung thuat toan sap xep lua chon sap xep cac phan tu giam dan theo dong cua mang\n");
	printf("6.Tinh tong cac phan tu la so nguyen to trong mang\n");
	printf("7.Su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang theo chieu tang dan\n");
	printf("8.Nhap gia tri mot mang 1 chieu gom n phan tu va chi so cot muon chen vao mang, thuc hien chen vao mang 2 chieu\n");
	printf("9.Thoat\n");
	printf("Moi ban nhap: ");
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Nhap gia tri cua mang\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("num[%d][%d]= ",i,j);
					scanf("%d",&num[i][j]);
				}
			}
			break;
		case 2:
			printf("In ra gia tri cua mang\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("%d\t",num[i][j]);
				}
				printf("\n");
			}
			break;
		case 3:
			sum=0;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(num[i][j]%5==0 && num[i][j]%2!=0){
						sum+=1;
					}
				}
			}
			printf("So luong cac phan tu chia het cho 5 va khong chua het cho 2 la: %d",sum);
			break;
		case 4:
			
			break;
		case 5:
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					for(int k=j+1;k<m;k++){
						if(num[i][j]<num[i][k]){
							key=num[i][j];
							num[i][j]=num[i][k];
							num[i][k]=key;
						}
					}
				}				
			}
			printf("In ra gia tri cua mang\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("%d\n",&num[i][j]);
				}
				printf("\n");
			}
			break;
		case 6:
			sum=0;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					int isPrime=0;
					if(num[i][j]>=2){
						for(int k=2;k<=sqrt(num[i][j]);j++){
							if(num[i][j]%j==0){
								isPrime=1;
								break;
							}
						}
					} else{
					isPrime=1;
					}
					if(isPrime==0){
						sum+=num[i][j];						
					}
				}	
			}
			printf("Tong la cac so nguyen to trong mang la:%d\n",sum);	
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			exit(0);
		default:
			printf("Xin hay nhap tu 1-9");		
		}
	}while(1==1);
}
