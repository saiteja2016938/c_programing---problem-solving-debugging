//  create a  program to calculate the absolute value of given integer using ternary operator
#include<stdio.h>

int main(){
  int number;
  printf("enter the number :");
  scanf("%d", &number);

  printf("%d is absolute number",(number > 0 ? number : -number));
}