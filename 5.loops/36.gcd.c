// create a program to find the greatest common devisor GCD 

#include<stdio.h>
int main(){
  int frist,second;
  printf("please enter the frist number :");
  scanf("%d", &frist);
  printf("please enter the second number :");
  scanf("%d", &second);

  int min = frist > second ? frist : second;

  for(int i = min ; i > 0 ; i--){
    if(frist % i == 0 && second == 0 ){
      printf(" the GCD of %d and %d is  %d ", frist, second,i);
      break;
    }
  }
  return 0;
}