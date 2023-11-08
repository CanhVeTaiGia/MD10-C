//1. Tai tap tin header <stdio.h> va <math.h> 
#include <stdio.h>
#include <math.h>
int main(){
  //2. Khai bao bien chua gia tri so nguyen
  int number;
  //3. Thong bao nhap so nguyen
  printf("Nhap vao mot so nguyen: ");
  //4. Lay gia tri gan vao dia chi bien number
  scanf("%d", &number);
  //5. Khai bao va khoi tao bien square binh phuong so nguyen
  int square = pow(number, 2);
  //6. In ra binh phuong so nguyen
  printf("Binh phuong so nguyen: %d\n",square);
}
