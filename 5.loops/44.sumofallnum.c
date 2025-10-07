// develop a program that calculates sum of all the entered by the user untle the user enters 0.
// the total sum then should be displayed
#include<stdio.h>
int main(){
  int num,sum = 0;
  printf("welcome to the number adder\n");

  do{
    printf("please enter your number:");
    scanf("%d",&num);
     sum += num;

  }while(num != 0);
  printf("the sum of all the numbers you entered is %d ",sum);
}