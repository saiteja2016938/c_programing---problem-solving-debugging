// create a program to find a given number is prime or not 

#include<stdio.h>
int main(){
  int num;
  printf("welcome to the prime calculator\n");
  printf("enter the number:");
  scanf("%d",&num);

int i = 2;
while(num > i){
  if(num % i == 0){
  printf("%d is not a prime number ",num);
  return 0;
  }
  i++;
}

printf("%d is a prime number",num);

return 0;

}