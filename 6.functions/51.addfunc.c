#include<stdio.h>

int add(int,int,int,int);
int main(){

  printf("welcome to the adding 4 numbers\n");
  printf("%d\n",add(1,2,3,4));
  printf("%d\n",add(11,22,33,44));
  printf("%d\n",add(4,87,2,9));
  printf("%d\n",add(45,24,67,18));
   
}

int add(int a,int b, int c, int d){

  int sum = a + b + c + d;

  return sum;
}