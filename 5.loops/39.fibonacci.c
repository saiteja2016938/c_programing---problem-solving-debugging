// create a program to print the fibonacci series ,up to certen number

//  (0 1 1 2 3 5 8 13.....)

#include<stdio.h>
int main(){

  int num;
  printf("welcome to the febonacci series\n");
  printf("please entere the number up to which the series should be printed :");
  scanf("%d",&num);

printf("0 ");
if(num >0){
  printf("1 ");
}
int prev = 0;
int next = 1;
while(prev + next <= num){
  int tem = prev + next;
  printf("%d ",tem);
  prev = next;
  next = tem;
}
return 0;
  
}