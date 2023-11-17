#include<stdio.h>
#include<stdlib.h>
int main(){
	int row,col,n,i,j,sum=0,sum1=0,sum2=0,max,min;
	printf("Nhap so dong va so cot\n");
	scanf("%d %d",&row,&col);
	int nums[row][col];
	do{
		printf("\n1.Nhap gia tri cac phan tu trong mang\n");
		printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3.in gia tri cac phan tu la le va tinh tong\n");
		printf("4.In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("5.In ra cac phan tu nam tren duong cheo chinh va cheo phu va tinh tong\n");
		printf("6.In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("7.Tinh gia tri trung binh cac phan tu trong mang(lam tron xuong) va thong ke co bao nhieu phan tu co gia tri bang gia tri trung binh\n");
		printf("8.In ra dong co tong gia tri cac phan tu la lon nhat\n");
		printf("9.Thoat\n");
		int choice;
		printf("Chon ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						printf("nums[%d][%d]=",i,j);
						scanf("%d",&nums[i][j]);
					}
				}
				break;
			case 2:
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						printf("%d\t",nums[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						if(nums[i][j]%2!=0){
						printf("%d\t",nums[i][j]);
						sum+=nums[i][j];
						}
					}
				}
				printf("\nTong cac phan tu la so le la:%d",sum);
				break;
			case 4:
				sum=1;
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						if(j==0){
						printf("%d\t",nums[i][j]);
						}
						if(j==col-1){
						printf("%d\n",nums[i][j]);	
						}sum=sum*nums[i][j];
					}
				}
				printf("Tich la:%d",sum);
				break;
			case 5:
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						if(i==j){
							sum1+=nums[i][j];
						}
						if(i+j==row-1){
							sum2+=nums[i][j];
						}
					}
				}
				sum=sum1+sum2;
				printf("Tong duong cheo chinh vs duong cheo phu la la: %d",sum);	
				break;
			case 6:
				max=nums[0][0];
				min=nums[0][0];
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						if(max<nums[i][j]){
							max=nums[i][j];
						}
						if(min>nums[i][j]){
							min=nums[i][j];
						}
					}
				}
				printf("Max va Min lan luot la %d va %d",max,min);
				break;
			case 7:
			
			case 8:
				
				for(i=0;i<row;i++){
					for(j=0;j<col;j++){
						printf("%d\t",nums[i][j]);
						sum+=nums[i][j];
					}
				}
				printf("\nTong cac phan tu la so le la:%d",sum);
			case 9:
				exit(0);
		}
	} while(1==1);
}
