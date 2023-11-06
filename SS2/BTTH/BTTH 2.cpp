#include <stdio.h>
#include <math.h>
int main(){
  int number1 = 11;
  int number2 = 4;
  int sum = number1 + number2;
  int sub = number1 - number2;
  int mul = number1 * number2;
  int divide = number1/number2;
  int divide_ceil = ceil((double)number1/(double)number2); 
  int divide_floor = floor((double)number1/(double)number2); 
  int surplus = number1 % number2;
  number1++;
  number2--;
  int result = pow(number1, number2);
}
