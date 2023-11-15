#include<stdio.h>
int main(){
	int n,oldNums[n],newNums,updateValue,updateIndex;
	printf("Nhap so luong phan tu cua mang la: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("oldNums[%d] = ",i);
		scanf("%d",&oldNums[i]);
	}
	printf("Nhap gia tri muon update la: ");
	scanf("%d",&updateValue);
	printf("Nhap gia tri muon update la: ");
	scanf("%d",&updateIndex);
	for(int i=0;i<n;i++){
		if(i<updateIndex){
			printf("newNums[%d] = %d\n",i,oldNums[i-1]);
		} else if(i>updateIndex){
			printf("newNums[%d] = %d\n",i,oldNums[i-1]);
		} else
		printf("newNums[%d] = %d\n",i,updateValue);
	}
}
