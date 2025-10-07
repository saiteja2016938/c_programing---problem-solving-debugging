// create a program using recursion to display the fibonacci series up to a certen number

#include<stdio.h>

int fibonacci(int pos);

int main(){

  int terms;
  printf("welcome to the fibonacci by recursion \n");
  printf("please enter the term :");
  scanf("%d",&terms);

  for(int i = 0; i < terms;i++){
    printf(" %d",fibonacci(i));
  }

}

int fibonacci(int pos){
  if(pos <= 1){
    return pos;
  }
  int current = fibonacci(pos -1)+fibonacci(pos-2);
  return current;
}
