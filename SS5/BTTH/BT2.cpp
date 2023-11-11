#include<stdio.h>
int main(){
	int sales,aCom;
	printf("Nhap doanh thu ban hang va tien hoa hong\n");
	scanf("%d",&aCom);
	if(aCom<=300){
		if(aCom<=100){
			printf("Hoa hong dai ly cua cua hang la %d",sales =aCom*(5/100));
		} if(aCom<=50){
			printf("Hoa hong dai ly cua cua hang la %d",sales =aCom*(10/100));
			}
	} else
	printf("Hoa hong dai ly cua cua hang la %d",sales=aCom*(20/100));
}
