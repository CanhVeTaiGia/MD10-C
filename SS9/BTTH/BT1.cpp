#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,nums[100],currentIndex=0,sum=0,max,min,i,count=0,check=0,findNum,j,addIndex,addValue,newNums[100];
	do{
		printf("\n1.Nhap so phan tu trong mang va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan li\n");
		printf("3.In ra gia tri cac phan tu chan va tinh tong\n");
		printf("4.In ra gia tri lon nhat và nho nhat trong mang\n");
		printf("5.In ra cac phan tu là so nguyen to trong mang và tinh tong\n");
		printf("6.Nhap vao mot so và thong ke trong mang co bao nhiêu phan tu co gia tri nhu vay\n");
		printf("7.Them mot phan tu vào vi tri chi dinh\n");
		printf("8.Thoat\n");
		int choice;
		printf("Nhap lua chon ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
			printf("Nhap so luong cac phan tu: ");
			scanf("%d",&n);
			for(i=0; i<n; i++){
				printf("nums[%d]= ", currentIndex);
				scanf("%d", &nums[currentIndex]);
				currentIndex++;				
			}
			break;
			case 2:
				printf("Mang la:\n");
				for(i=0; i<currentIndex; i++){
					printf("nums[%d]= %d\n", i, nums[i]);				
			}
			break;
			case 3:
				printf("So chan trong mang la:\n");
				for(i=0; i<currentIndex; i++){
					if(nums[i]%2==0){
					printf("nums[%d]= %d\n", i, nums[i]);
					sum+=nums[i];
				}
			} printf("Tong la: %d",sum);
			break;
			case 4:
				max=nums[0];
				min=nums[0];
				for(i=0; i<currentIndex; i++){
					if(max<nums[i]){
						max=nums[i];
					}
						min=nums[0];
					if(min>nums[i]){
						min=nums[i];					
					}								
				}printf("max=%d,min=%d",max,min);
				break;
			case 5:				
				for(i=0;i<currentIndex;i++){
					check=1;
					for(j=2;j<nums[i]-1;i++){
						if(nums[i]%2==0){
							check=0;
						}
					}
					if(check==1){
						if(nums[i]!=1){
						printf("Gia tri cua mang la so nguyen to la:%d\n",nums[i]);						
					}sum+=1;
				}
				printf("Tong cac so nguyen to cua mang la:%d\n",sum);
				break;
			case 6:
				printf("Nhap so can tim");
				scanf("%d",&findNum);
				for(i=0;i<n;i++){
					if(findNum==nums[i]){
						printf("nums[%d]=%d\n",i,nums[i]);
						count+=1;
					}
				}printf("Co %d so nhu vay",count);	
				break;
			case 7:
				printf("Nhap gia tri muon them vao");
				scanf("%d",&addValue);
				printf("Nhap vi tri muon them vao");
				scanf("%d",&addIndex);
				for(i=0;i<=currentIndex;i++){
					if(i<addIndex){
						newNums[i]=nums[i];
					}if(i>addIndex){
						newNums[i]=nums[i+1];
					}if(i==addIndex){
						newNums[i]=addValue;
					}					
				}currentIndex++;
				for(i=0;i<currentIndex;i++){
					printf("newNums[%d]=%d\n",i,nums[i]);
				}
				break;
			case 8:
			exit(0);		
		}		
	}
}while(1==1);
}
