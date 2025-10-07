//  55.demostrate with the function incremnet that the orginal integer passed 
// to it dosnot chnges after incrementing it inside a function.

#include<stdio.h>

void increment(int);
int main(){
  int num;
  printf("welconme to showing call by value\n");
  printf("please enter the number :");
  scanf("%d", &num);

  printf("\n befor :  value of num is %d",num);
  increment(num);
  printf("\nAfter : value of num is %d",num);

}

void increment(int num){

  printf("\n In function befor : value of num is %d",num);
  num++;
  printf("\n In function After : value of num is %d",num);

}