//  write a c program that initializes an unsigned int to its maximum possible values and an int to a negative number
//  add 1 to both and print the result to show how the unsigned int wraps around 0 ,
// where as the int remains negative due to overflow 
#include<stdio.h>
#include<limits.h>

int main(){
  unsigned int positive = UINT_MAX;
  int normal = INT_MAX;

  printf("Max value of unsigned int is : %u\n ",positive);
  printf("Max value of normal int is %d\n\n" ,normal);

  positive++;
  normal++;

  printf("Max value of unsigned int is : %u\n ",positive);
  printf("Max value of normal int is %d" ,normal);


  return 0;

}

