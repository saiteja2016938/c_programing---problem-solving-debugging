// write a program to demonostrate the different in range between long , long long by calculating the factorial of 20
#include<stdio.h>

long long factorial(int num);
int main(){
  int num;
  printf("welcome to the factorial world \n");
  printf("please enter the number :");
  scanf("%d",&num);
  
  long long result = factorial(num);  
  printf("the factorial of %d is %ld",num,result);
  return 0;
}

long long factorial(int num){
if(num <= 1){
  return 1;
}
return num * factorial(num -1); 
}