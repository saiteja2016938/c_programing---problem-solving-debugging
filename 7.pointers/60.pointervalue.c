// write a program to change the value of integer varibale 
// using a pointer and *operator.
#include<stdio.h>
int main(){
  int num = 5;
  int *ptr = &num;

  printf("value of num befor changing with pointer is %d\n",num);
  *ptr = 87;
  printf("value of num changed with pointer is %d",num);
}