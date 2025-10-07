//  create a program to reverse the digit of a number

#include<stdio.h>
int main(){
  int num;
  printf("welcome to the reverse number\n");
  printf("enter the number :");
  scanf("%d",&num);

  int reverse = 0;
  int copy = num;
  while(copy > 0){
    reverse = (reverse*10)+(copy%10);
    copy /= 10;
  }

 
  printf("the reverse number of %d is %d ",num,reverse);
  return 0;
}