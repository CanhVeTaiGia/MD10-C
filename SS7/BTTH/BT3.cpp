#include<stdio.h>
int main(){
	float yir,bdeposits,month,rmoney;
	float interest;
	printf("Nhap tien gui,lai suat nam va so thang gui\n");
	scanf("%f %f %f",&bdeposits,&yir,&month);
	interest=bdeposits*yir/100;
	rmoney=bdeposits+interest;
	for(int i=1;i<=month;i++){
		interest=interest+interest*yir/100;
		rmoney=rmoney+interest;
		printf("So tien lai la: %f\n Tien nhan duoc la: %f\n",interest,rmoney);
	}
}
