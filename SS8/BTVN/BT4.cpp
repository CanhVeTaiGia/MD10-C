#include<stdio.h>
int main(){
	int n,oldNums[n],addValue,addIndex,newNums,i;
	printf("Nhap so phan tu cua mang = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("oldNums[%d] = ",i);
		scanf("%d",&oldNums[i]);
	}printf("Nhap gia tri muon them ");
	scanf("%d",&addValue);
	printf("Nhap vi tri muon them ");
	scanf("%d",&addIndex);
	if(addIndex>n){
		printf("Khong hop le");
	} else{
	for(i=0;i<=n;i++){
		if(i<addIndex-1){
			printf("newNums[%d] = %d\n",i,oldNums[i]); 	
		}else if(i>addIndex-1){
			printf("newNums[%d] = %d\n",i,oldNums[i-1]);
		}else
		printf("newNums[%d] = %d\n",i,addValue);
	}
 	} 
}
