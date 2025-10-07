// define a funtion squre
#include<stdio.h>

int squre(int);
int main(){

  int num;
  printf("welcome to the world of squres\n");
  printf("please enter the number :");
  scanf("%d",&num);

  printf("the squre of the number %d is %d",num,squre(num));

  return 0;

}

int squre(int a){
  int squre = a * a;
  return squre;
}