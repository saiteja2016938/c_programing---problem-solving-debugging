// create a program to find the minimum of 2 numbers using ternary operator 

#include<stdio.h>

int main(){
  int frist, second;
  printf("enter the frist number:");
  scanf("%d", &frist);
  printf("enter the second number :");
  scanf("%d", &second);

  // if(frist < second ){
  //   printf("%d is minimum ", frist);
  // }else{
  //   printf("%d is minimum ", second);
  // }
  int min = frist < second ? frist : second;
  printf("minimum of the 2 numbers is :%d", min); 
  return 0;

}