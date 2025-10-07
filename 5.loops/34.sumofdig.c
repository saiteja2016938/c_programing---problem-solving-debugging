// create a program that computes sum of digits of digits of an integer

#include<stdio.h>
int main(){
  int num;
  printf("welcome to the sum of digits of an integer\n");
  printf("please enter the number :");
  scanf("%d", &num);

  int dig;
  int sum = 0;

  while(num > 0){
    sum += num % 10;
    num /= 10;
    
  }
  printf("the sum of digits of an interger num is %d",sum);
}