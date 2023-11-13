#include<stdio.h>
#include <stdlib.h>
int main(){
	float s=0;
	int a,b;
	int ucln,bcnn;
	int c=a,d=b;
	printf("Nhap 2 so\n");
	scanf("%d %d",&a,&b);
	do{
		printf("Caculator\n");
		printf("1.Tong 2 so la\n");
		printf("2.Hieu 2 so la\n");
		printf("3.Tich 2 so la\n");
		printf("4.Thuong cua 2 so la\n");
		printf("5.So du trong phep chia 2 so\n");
		printf("6.Uoc chung lon nhat\n");
		printf("7.Boi chung nho nhat\n");
		printf("8.Thoat\n");
		printf("Lua chon cua ban\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				s=a+b;
				printf("Tong cua 2 so la: %d",s);
				exit(0);
			case 2:
				s=a-b;
				printf("Hieu cua 2 so la: %d",s);
				exit(0);
			case 3:
				s=a*b;
				printf("Tich cua 2 so la: %d",s);
				exit(0);
			case 4:
				s=a/b;
				printf("Thuong cua 2 so la: &d",s);
				exit(0);
			case 5:
				s=a%b;
				printf("So du cua 2 so la %d");
				exit(0);
			case 6:
    			while(a!=b){
    			if(a=b){
    				ucln=a;
    				printf("Uoc chung lon nhat: %d",ucln);
    				exit(0);
				}
        		if(a > b){
            		a=a-b;
       	 		}else
            		b=b-a;         
    		}
    			return a;
  		 	case 7:
    			while(a != b){
    			if(a=b){
    				ucln=a;
    				bcnn=(c*d/ucln);
    				printf("Boi chung nho nhat la: %d",bcnn);
    				exit(0);
				}
        		if(a > b){
            		a = a - b;
       	 		}else
            		b = b - a;         
    			}
    			return a;
    		case 8:
    		exit(0); 				
		}
	}while(1==1);
}
