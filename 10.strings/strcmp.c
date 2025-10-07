#include<stdio.h>
#include<string.h>

int main(){
  int result = strcmp("apple","banana");
  printf("\ncomparision of apple and banan is %d",result);

  result = strcmp("cherry","banana");
  printf("\ncomparision of apple and banan is %d",result);

  result = strcmp("date","date");
  printf("\ncomparision of apple and banan is %d",result);
  
}