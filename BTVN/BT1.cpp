#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang ");
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++){
		printf("num[%d]= ",i);
		scanf("%d",&num[i]);
	}
	do{
		printf("\n*********************Menu************************\n");
		printf("1.In ra cac phan tu cua mang\n");
		printf("2.Su dung Insertion Sort sap xep giam dan va in ra\n");
		printf("3.Su dung Selection Sort sap xep tang tang dan roi in ra\n");
		printf("4.Su dung Bubble Sort sap xep mang giam dan roi in ra\n");
		printf("5.Thoat\n");
		int choice;
		printf("Xin moi chon");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Mang gom:\n");
				for(int i=0;i<n;i++){
					printf("num[%d]= %d\n",i,num[i]);;
				}
				break;
			case 2:
				printf("Mang moi la:\n");
				for	(int i=1;i<n;i++){
					int key=num[i];
					int j=i-1;
					while(j>=0 && key>num[j]){
						num[j+1]=num[j];
						j-=1;						
					}
					num[j+1]=key;										
				}
				for(int i=0;i<n;i++){
					printf("num[%d]=%d\n",i,num[i]);
				}				
				break;
			case 3:
				printf("Mang moi la:\n")
				for(int i=0;i<n-1;i++){
					for(int j=i+1;j<n;j++){
						if(num[i]>num[j]){
							int temp=num[i];
							num[i]=num[j];
							num[j]=temp;
						}
					}
				}
				for(int i=0;i<n;i++){
					printf("num[%d]=%d\n",i,num[i]);
				}
				break;
			case 4:
				 for (int i=0;i<n-1;i++){
    				for(int j=0;j<n-i-1;j++){
      					if (num[j]<num[j+1]){
        					int temp = num[j];
        					num[j]=num[j+1]; 
        					num[j+1]=temp;
     					}
    				}
  				}
  				for(int i=0;i<n;i++){
  					printf("num[%d]=%d\n",i,num[i]);
				  }
				break;
			case 5:
				exit(0);
			default:
				printf("Xin vui long nhap tu 1-5");
		}
	}while(1==1);
}
