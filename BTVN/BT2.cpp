#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m;
	printf("Nhap dong va cot:");
	scanf("%d %d",&n,&m);
	int num[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("num[%d][%d]=",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	do{
		printf("				Menu\n");
		printf("1.In gia tri mang theo ma tran\n");
		printf("2.Sap xep mang co gia tri cac phan tu theo dong giam dan\n");
		printf("3.Sap xep mang co gia tri cac phan tu theo cot giam dan\n");
		printf("4.Thoat\n");
		printf("Moi ban nhap\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
					int key;
					for(int j=0;j<n;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 2:
				for(int i=0;i<n;i++){
					for(int j=1;j<m;j++){
						int key = num[i][j];
						int k=j-1;
						while(k>=0 && key<num[i][j]){
							num[i][k+1]=num[i][k];
		        			k-=1;
						}
						num[i][k+1]=key;
					}					
				}
				printf("Gia tri cac phan tu theo dong tang dan la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				for(int i=1;i<n;i++){
					for(int j=0;j<m;j++){
						int key = num[i][j];
						int k=j-1;
						while(k>=0 && key>num[i][j]){
							num[k+1][j]=num[k][j];
		        			k-=1;
						}
						num[k+1][j]=key;
					}					
				}
				printf("Gia tri cac phan tu theo cot giam dan la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 4:
				exit(0);
		}
	}while(1==1);
}
