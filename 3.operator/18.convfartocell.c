// create a program to convert faherenit to celsius(c = (f - 32)x5/9))


#include<stdio.h>
int main(){

float f;
printf("welcome to the temperature converter\n");
printf("please enter the temperature in F :");
scanf("%f", &f);
float c = (f -32)*5/9;
printf(" temperateur in C is : %.2f",c);
}