// create a program to calculate simple intrest (simple intrest = PXTXR/100)

#include<stdio.h>

int main(){

  int p,t,r;
  printf("enter the princple amount :");
  scanf("%d",&p);
  printf("enter time : ");
  scanf("%d",&t);
  printf("enter the rate of intrest :");
  scanf("%d",&r);

  printf("simple intrest = %d",(p*t*r)/100);
}