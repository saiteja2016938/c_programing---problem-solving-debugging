#include<stdio.h>

int main(){
  int frist,second,temp;
  printf("please enter the frist number :");
  scanf("%d", &frist);
  printf("now enter the second number :");
  scanf("%d",&second);

  printf("the vales of frist :%d and second : %d before swaping\n",frist,second);
   
  // swapping 

  temp = frist;
  frist = second;
  second = temp;
  printf("the value of frist is : %d the value of second is : %d",frist,second);

  return 0;

}