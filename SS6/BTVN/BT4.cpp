#include<stdio.h>
#include <stdlib.h>
int main(){
	int n,i;
	int s=0,j=1;
	printf("Nhap n\n");
	scanf("%d",&n);
	do{
		printf("1. In day so chia het cho 2 và giam dan (n >= so >= 2)\n");
		printf("2. In day so nho hon n va tinh tong\n");
		printf("3. In ra cac uoc so chan cua n\n");
		printf("4. In ra uoc le va so luong uoc le cua n\n");
		printf("5. In ra uoc le lon nhat cua n\n");
		printf("6. Thoat\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(i=n;i>=1;i--){
					if(i%2==0){
						printf("%d\n",i);
					}
				}exit(0);
			case 2:
				for (i=1;i<n;i++){
					printf("%d\n",i);
					s+=i;
				} printf("Tong la: %d",s);
				exit(0);
			case 3:
				for (i=1;i<n;i++){
					if(n%i==0 && i%2==0){
						printf("%d\n",i);
					}
				} exit(0);
			case 4:
				int quantum;
				for (i=1;i<n;i++){
					if(n%i==0 && i%2!=0){
						printf("%d\n",i);
						s+=1;
						quantum=quantum+1;
						exit(0);
					}
				}
			case 5:
				for (i=n;i>=1;i--){
					if(n%i==0 && i%2!=0){
						printf("%d\n",i);
						s+=j;
						exit(0);
					}
				}
			case 6:
				exit(0);
			default:
				printf("Vui long chon tu 1-6");
		}
	}while("Vui long chon tu 1-6");
}
