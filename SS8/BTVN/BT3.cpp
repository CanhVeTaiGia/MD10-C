#include<stdio.h>
int main(){
	int n,nums[n],findnum,sum;
	printf("Nhap so phan tu cua mang = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nums[%d]:=",i);
		scanf("%d",&nums[i]);		
	}
	printf("So muon tim la: ");
	scanf("%d",&findnum);	
	for(int i=0;i<n;i++){
		if(findnum==nums[i]){
			printf("nums[%d]\n",i);
			sum+=nums[i];
		}			
	}
	printf("Tong la %d",sum);
}
