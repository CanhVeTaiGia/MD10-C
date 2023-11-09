#include <stdio.h> 
int main(){
  // 1. Nhap so nguyen tu ban phim
  int number;
  printf("Nhap vao mot so nguyen: ");
  scanf("%d", &number);
  // 2. Su dung if kiem tra so du trong phep chia 2 bang 0 
  if (number%2==0) {
   printf("%d la so chan\n", number);
  } else {
    //3. So nguyen la so le
    printf("%d la so le\n", number);
  }
}
