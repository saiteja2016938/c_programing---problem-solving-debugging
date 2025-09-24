// create a program to calculate product of two floting point numbers 
#include<stdio.h>

int main(){

  float frist , second ;

  printf("enter the frist number :");
  scanf("%f",&frist);
  printf("enter the second number :");
  scanf("%f",&second);

  printf("product of frist :%f and second %f is %f\n",frist,second,(frist*second));
  printf("product of frist :%f and second %f is %.2f\n",frist,second,(frist*second));

}