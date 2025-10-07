// create a program that takes 2 numbers and show results of all arthimetic operators (+,-,*,/,%).

#include<stdio.h>

int main(){
  int frist, second;
  printf("please enter the frist number :");
  scanf(" %d",&frist);
  printf("please enter the second number :");
  scanf("%d",&second);

  printf("here are the results of the operators :\n");
  printf(" %d + %d = %d\n ", frist,second,(frist + second));
  printf("%d - %d = %d\n ", frist,second,(frist - second));
  printf("%d * %d = %d\n ", frist,second,(frist * second));
  printf("%d / %d = %d\n ", frist,second,(frist / second));
  printf("%d modulo %d = %d\n ", frist,second,(frist % second));
  return 0;

}