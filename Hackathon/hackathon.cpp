#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,num[100];
	int currentIndex=0;
	int sum;
	int max,min;
	int isPrime;
	int m;
	int count;
	int key;
	int newNum;
	int num1;
	int num2;
	int num3;
	do{
		printf("			Menu\n");
		printf("1.Nhap gia tri n phan tu cua mang:\n");
		printf("2.In gia tri phan tu trong mang\n");
		printf("3.Tinh tong cac phan tu chia het cho 2 va 3\n");
		printf("4.In ra gia tri phan tu lon nhat va nho nhat trong mang\n");
		printf("5.Su dung thuat toan sap xep chen sap xep mang tang dan\n");
		printf("6.Tinh tong cac phan tu la so nguyen to trong mang\n");
		printf("7.Sap xep cacphan tu le chia het cho 5 o dau mang theo thu tu giam dan,cac phan tu chan chia het cho 5 o cuoi mang theo thu tu tang dan, cac phan tu con lai o mang theo thu tu giam dan\n");
		printf("8.Nhap gia tri m tu ban phim,chen gia tri m vao mang dung vi tri\n");
		printf("9.Thoat\n");
		int choice;
		printf("Xin moi nhap\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap n: ");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					printf("num[%d]= ",currentIndex);
					scanf("%d",&num[currentIndex]);
					currentIndex++;				
				}
				break;
			case 2:
				for(int i=0;i<currentIndex;i++){
					printf("num[%d]=%d\n",i,num[i]);		
				}
				break;
			case 3:
				sum=0;
				for(int i=0;i<currentIndex;i++){
					if(num[i]%2==0 || num[i]%3==0){
						sum+=num[i];
					}
				}
				printf("Tong cac phan tu chia het cho 2 va 3 la: %d\n",sum);
				break;
			case 4:
				max=num[0];
				min=num[0];
				for(int i=0;i<currentIndex;i++){
					if(max<num[i]){
						max=num[i];
					}
					if(min>num[i]){
						min=num[i];
					}
				}
				printf("Phan tu lon nhat la %d\nPhan tu nho nhat la %d\n",max,min);
				break;
			case 5:
				for(int i=0;i<n;i++){
					int key=num[i];
					int j=i-1;
					while(j>=0 && num[j]>key){
						num[j+1]=num[j];
						j=j-1;
					}
					num[j+1]=key;
				}
				printf("Mang sau khi sap xep la\n");
				for(int i=0;i<n;i++){
					printf("nums[%d]=%d\n",i,num[i]);
				}
				break;
			case 6:
				sum=0;
				for(int i=0;i<currentIndex;i++){	
					int isPrime=0;
					if(num[i]>=2){
						for(int j=2;j<=sqrt(num[i]);j++){
							if(num[i]%j==0){
								isPrime=1;
								break;
							}
						}
					} else{
						isPrime=1;
					}
					if(isPrime==0){
						printf("%d la so nguyen to\n",num[i]);
						sum+=num[i];
						}
				}
				printf("Tong la %d",sum);
				break;
			case 7:
				count=0;
				for(int i=0;i<currentIndex;i++){
					if(num[i]%5!=0){
						for(int i=0;i<currentIndex;i++){
							int key=num[i];
							int j=i-1;
							while(j>=0 && num[j]<key){
								num[j+1]=num[j];
								j=j-1;
							}							
							num[j+1]=key;							
						}
						printf("num[%d]=%d\n",count,num[i]);
						count++;
					}
					if(num[i]%5!=0){
						for(int i=0;i<currentIndex;i++){
							int key=num[i];
							int j=i-1;
							while(j>=0 && num[j]>key){
								num[j+1]=num[j];
								j=j-1;
							}
							num[j+1]=key;
							printf("num[%d]=%d\n",count,num[i]);
						}
						
						count++;
					}
					if(num[i]%5==0 && num[i]%2==0){
						for(int i=0;i<currentIndex;i++){
							int key=num[i];
							int j=i-1;
							while(j>=0 && num[j]<key){
								num[j+1]=num[j];
								j=j-1;
							}
							num[j+1]=key;
							printf("num[%d]=%d\n",count,num[i]);
						}
						
						count++;
					}
				}
				break;
			case 8:
				printf("Nhap gia tri m tu ban phim vao mang ");
                scanf("%d", &m);
                num[currentIndex]=m;
                currentIndex++;
                for (int i=1;i<currentIndex;i++){
                    int key=num[i];
                    int j=i-1;
                    while (j>=0 && key<num[j]) {
                        num[j+1]=num[j];
                    j-=1;
                }
                num[j+1]=key;
                }
                printf("Day so sau khi sap xep lai la:\n");
                for(int i=0;i<currentIndex;i++){
		            printf("num[%d]=%d\n",i,num[i]);
                }
				break;
			case 9:
				exit(0);
			default:
				printf("Xin hay nhap tu 1-9\n");
		}
	}while(1==1);
}
