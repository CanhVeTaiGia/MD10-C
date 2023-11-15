#include<stdio.h>
int main(){
	int n,oldNums[n],newNums[n-1],delIndex,i;
	printf("Nhap so luong phan tu cua mang = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("oldNums[%d] = ",i);
		scanf("%d",&oldNums[i]);
	}
	printf("Nhap vi tri muon xoa ");
	scanf("%d",&delIndex);
	for(i=0;i<=delIndex;i++){
		newNums[i]=oldNums[i];
	}
	for(i=delIndex;i<n;i++){
		newNums[i-1]=oldNums[i];
	}
	for(i=0;i<n-1;i++){
		printf("newNums[%d] = %d\n",i,newNums[i]);
	}
}
