// create a program to sum all odd numbers form 1 to specified number N
#include<stdio.h>
int main(){

  int n;
  printf("wellcome to the odd number sum printer \n");
  printf("please enter a  number N :");
  scanf("%d", &n);

  int i = 1;
  int sum = 1;
  while(i < n){
      sum += i;
      i +=2;
    
  }
  printf("the sum of N odd number is : %d",sum);
}