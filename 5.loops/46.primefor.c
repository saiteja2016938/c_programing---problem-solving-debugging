// create a program using for to display if a number is prime or not

#include<stdio.h>
int main(){

  int num;
  printf("welcome to the prime calculator\n");
  printf("please enter the numbre :");
  scanf("%d",&num);

  for(int i =2; i < num ;i++){
    if(num % i == 0){
      printf("%d is not a prime number",num);
      return 0;
  }

  }
  printf("%d is a prime number",num);
  return 0;

}