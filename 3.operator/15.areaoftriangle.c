// create a program to calculate area of triangle

#include<stdio.h>

int main(){

  float h,b;
  printf("enter the height :");
  scanf("%f",&h);
  printf("enter the breadth :");
  scanf("%f",&b);

  float area = (h * b)/2;
 
  printf(" the area of triangle is %.2f",area);
 
}