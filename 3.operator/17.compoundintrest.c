// create a program to calculate compound intrest (compount intrest  = p(1+r/100)t)
#include<stdio.h>
#include<math.h>


int main(){

  float p,r,t;

    printf("enter the princple amount :");
  scanf("%f",&p);
  printf("enter time : ");
  scanf("%f",&t);
  printf("enter the rate of intrest :");
  scanf("%f",&r);
 float ci = p*pow((1+(r/100)),t);
  printf("compound intrest  = %.2f", ci);

}