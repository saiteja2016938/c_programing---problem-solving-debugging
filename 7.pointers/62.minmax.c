// 62.implement a void minmax(int *a , int *b , int *min, int *max) function that takes two integer pointers 
// a and b as input and assigns the smaller value to min and the larger value to max using call by referance 
// write a main funtion to test it with different values.

#include<stdio.h>

void minmax(int*,int*, int *, int *);
int main(){
  int frist ,second, min, max;
  printf("welcome to finding min and max \n");
  printf("please enter the frist number :");
  scanf("%d",&frist);
  printf("now enter the second number:");
  scanf("%d",&second);

  minmax(&frist,&second,&min,&max);
  printf("between %d and %d minimum is %d maximum is %d",frist,second,min,max);
  return 0;

}

void minmax(int *a ,int *b , int *min, int *max){
  if(*a>*b){
    *min = *b;
    *max = *a;
  }else{
    *min = *a;
    *max = *b;
  }
}