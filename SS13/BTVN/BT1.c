#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//In menu
void printMenu(){
	printf("\n1. Nhap vao chuoi ki tu\n");
	printf("2. In ra noi dung vua nhap\n");
	printf("3. In ra chuoi dao nguoc\n");
	printf("4. In ra so luong chu cai trong chuoi\n");
	printf("5. In ra so luong chu so trong chuoi\n");
	printf("6. In ra so luong ky tu dac biet trong chuoi\n");
	printf("7. Thoat\n");
}
//Kiem tra chu cai
int isAlphabet(char cha){
    return((cha>='a' && cha<='z') || (cha>='A' && cha<='Z'));
}
//Kiem tra chu so
int isNumber(char num){
	return(num>='0' && num<='9');
}
//Kiem tra ki tu dac biet
int isSymbol(char sym){
	return(sym!=(sym>='0' && sym<='9' && sym>='a' && sym<='z' && sym>='A' && sym<='Z'));
}
//Ham main
int main(){
	char str[100];
	int length=0;
	int count;	
	do{
		printMenu();
		int choice;
		printf("Moi nhap\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Moi nhap ki tu ");
				scanf("%s",&str);
				break;
			case 2:
				printf("In ra do dai chuoi va noi dung vua nhap\n");
				printf("%d\n",strlen(str));
				printf("%s",str);
				break;
			case 3:
				while(str[length]!='\0'){
					length++;
				}
				printf("Chuoi dao nguoc là: ");
    			for (int i=length-1;i>=0;i--){
        			printf("%c",str[i]);
    			}
				break;
			case 4:
				count=0;
    			for(int i=0;str[i]!='\0';i++){
        			if(isAlphabet(str[i])){
           	 			count++;
        			}
    			}
    			printf("So luong chu cai trong chuoi là: %d\n",count);
				break;
			case 5:
				count=0;
				for(int i=0;str[i]!='\0';i++){
					if(isNumber(str[i])){
						count++;
					}
				}
				printf("So luong chu so trong chuoi la: %d\n",count);
				break;
			case 6:
				count=0;
				for(int i=0;str[i]!='\0';i++){
					if(isSymbol(str[i])){
						count++;
					}
				}
				printf("So luong ky tu dac biet trong chuoi la: %d\n",count);
				break;
			case 7:
				exit(0);
		}
	}while(1);
	return 0;
}
