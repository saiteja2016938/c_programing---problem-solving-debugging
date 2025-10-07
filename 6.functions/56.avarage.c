// call a function get_average that takes 5 integer numbers and returns the agerage

#include<stdio.h>

int get_average(int,int,int,int,int);

int main(){

  printf("the average is %d",get_average(4,3,2,6,7));
  return 0;

}

int get_average(int a,int b,int c,int d, int e){

  int avg = (a+b+c+d+e)/5;
  return avg;
}