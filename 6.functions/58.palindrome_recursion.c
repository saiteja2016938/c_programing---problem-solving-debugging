// 58. create a program to check if a number is palindrome using recursion

#include<stdio.h>

int reverse(int num ,int rev);

int main(){

int num;
printf("welcome to the palindrome recursion \n");
printf("please enter the number :");
scanf("%d",&num);

int rev = reverse(num,0);

if(num == rev){
  printf("%d is a palindrome",num);
}else{
  printf("%d is not a plaindrome",num);
}

   
}
int reverse(int num , int rev){
if(num == 0){
  return rev;
}
int reminder = num % 10;
int new_num = num /10;
int new_rev = rev*10 + reminder;
return reverse(new_num,new_rev);
}