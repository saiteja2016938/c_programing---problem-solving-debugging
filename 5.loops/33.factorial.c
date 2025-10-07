// write a funtion that calculates the factorial of a given number
#include<stdio.h>
int main(){
  int num;
  printf("welcome to the factorial calculator\n");
  printf("please enter the number :");
  scanf("%d",&num);

  int i = 1;
  int fact = 1;
  while(i <= num){
    fact *= i;
    i++;
  }
  printf("the factorial of number %d is %d", num , fact);


}