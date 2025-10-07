//  create a program to continue to sum of all he positive numbers entered by the user ;
// skip any negative number 

#include<stdio.h>
int main(){
  int num, sum =0;
  printf("welcome to the sum of numbers");

  do{

  printf("please enter the number :");
  scanf("%d",&num);
  if(num < 0) continue;
  sum += num; 

  }while(num != 0);

  printf("the sum of all positive numer is %d",sum);
  return 0;
}