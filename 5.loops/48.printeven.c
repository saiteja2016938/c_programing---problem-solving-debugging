// create a progrma using continue to print only even numebers, using continue for odd numbers
#include<stdio.h>
int main(){

  int num;
  printf("welcom to the printing even numbers\n");
  printf("please enter the number:");
  scanf("%d",&num);

  for(int i =0 ; i< num ;i++){

    if(i % 2 != 0) continue;
    printf("%d ",i);
  }

  return 0;
}