#include<stdio.h>
int main(){
	int	n,nums[n],min,max;
	printf("Nhap so luong phan tu trong mang=");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nums[%d]=",i);
		scanf("%d",&nums[i]);
	}printf("Gia tri cac phan tu trong mang:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",nums[i]);
	}
	for(int i=0;i<n;i++){
		max=nums[0];
		if(max<nums[i]){
			max=nums[i];			
		}		
	}printf("Max la %d\n",max);
	for(int i=0;i<n;i++){
		min=nums[0];
		if(min>nums[i]){
			min=nums[i];
		}			
	}printf("Min la %d\n",min);	
}
