#include<stdio.h>
int main(){
	int minutes,sF = 25000,rates;
	printf("Nhap vao so phut su dung\n");
	scanf("%d",&minutes);
		if(minutes<=200){
			if(minutes<=150){
				if(minutes<=50){
					printf("Gia cuoc cua ban la %d",rates=minutes*600+sF);
				} else
				printf("Gia cuoc cua ban la %d",rates=(minutes-50)*400+sF);
			} else
			printf("Gia cuoc cua ban la %d",rates=(minutes-150)*200+(150*600)+(50*600)+sF);
		} else 
		printf("Gia cuoc cua ban la %d",rates=(minutes-200)*100+(50*400)+(100*600)+(50*600)+sF);
	}
