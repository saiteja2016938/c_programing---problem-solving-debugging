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

 if(num == reverse){
  printf("the number %d is a palindrome ",num);
 }else{
  printf("the number %d not is a palindrome ",num);
 }
  return 0;
}