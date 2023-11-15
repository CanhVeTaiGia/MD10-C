#include<stdio.h>
int main(){
	int col,row;
	printf("Nhap so dong va so cot cua mang 2 chieu: ");
	scanf("%d %d",&row,&col);
	int nums[row][col],sum;
	for(float i=0;i<row;i++){
		for(float j=0;j<col;j++){
			printf("Nhap cac gia tri cua mang: ");
			scanf("%f",&nums[i][j]);
		}
	}
	printf("Gia tri cac phan tu mang 2 chieu:\n"); 
  	for(float i=0;i<row;i++){
    	for (float j=0;j<col;j++){
      		if(nums[i][j]%2==0){
			  sum+=nums[i][j];
			}
    	}
  	}printf("Tong la %f",sum);
}
