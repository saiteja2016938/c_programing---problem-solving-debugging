//  crate a program to find least common multiple of two numbers

#include<stdio.h>
int main(){
   int frist,second;
   printf("enter the frist number :");
   scanf("%d", &frist);
   printf("enter the second number :");
   scanf("%d",&second);

   int min = frist < second ? frist : second;
   int max = frist * second;
   for(int i = min ; i <= max; i++){
    if(i % frist == 0 && i % second == 0 ){
      printf("the LCM of %d and %d is %d",frist,second,i);
      break;
    }
   }
return 0;

}