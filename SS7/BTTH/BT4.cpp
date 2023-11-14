#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,flag;
	printf("Nhap n");
	scanf("%d",&n);
	int sum=0;
	do{
		printf("1.In ra day so co gia tri nho hon hoac bang n va tinh tong\n");
		printf("2.In ra va den cac so chia het cho 3 nho hon n");
		printf("3.Kiem tra xem co phai so nguyen to hay khong\n");
		printf("4.Kiem tra xem co phai so hoan hao hay khong\n");
		printf("5.Tinh tong cac uoc so cua n");
		printf("6.Tinh giai thua n");
		printf("7.In ra so dao nguoc");
		printf("8.In ra cac so nguyen to tu 1-n");
		printf("9.Thoat");
	int choice;
	printf("Vettel hay nhap theo cach cua ban");
	switch(choice){
		case 1:
			for(int i=1;i<=n;i++){
				printf("%d",i);
				sum+=i;
			} printf("Tong la %d",sum);
			exit(0);
		case 2:
			for(int i=1;i<n;i++){
				if(i%3==0){
					printf("%d",i);
					sum+=1;
				} printf("%d",sum);
			} exit(0);
		case 3:
			int isPrime;
    		if (n < 2){
        		return 0;
    		}
			for (int i = 2; i <= n / 2; i++) {
        		if (n % i == 0) {
            		return 0;
        		}
    		}
			return 1;
			exit(0);
		case 4:
			int isPerfect;
			for (int i=1;i<=n/2;i++){
        		if(n%i==0){
            		sum += i;
        		}
    		}printf("So nguyen la so hoan hao");
    		return (sum == n);
    		exit(0);
    	case 5:
    		for(int i=1;i<=n;i){
    			if(n%i==0){
    				sum=sum+=i;
				}
			} printf("Tong la: %d",sum);
    		exit(0);
    	case 6:
    		for(int i=1;i<=1;i++){
    			sum=i*=i;
			}printf("Giai thua la %d",sum);
		case 7:
			int isprime;
    			if (n < 2) {
        		return 0;
    		}
    		for (int i = 2; i <= n / 2; i++) {
        		if (n % i == 0) {
            		return 0;
        		}
    		}
    		return 1;
			exit(0);
		case 8:
			int j;
        	for(int i=2;i<=n;i++){
        		flag = 0;
        		for(j=2;j<i;j++){
	    			if (i % j == 0) {
        				flag = 1;
        			}
       			if (flag == 0){
        			printf("%d\n",i);
					}
        		}
   			}
        	exit(0);
		case 9:
			exit(0);
		default:
		printf("Vui long chon 1-9");			
		}		
	}while("Vui long chon 1-9");	
}
