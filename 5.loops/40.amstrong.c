// create a  program to check if a number is amstrong number .

#include<stdio.h>
int main(){
  int num;
  printf("welcome to the amstrong number\n");
  printf("please enter the number:");
  scanf("%d",&num);

  int cpy = num;
  int ams,res = 0;
  while(cpy > 0){
    ams = cpy % 10;
    cpy /= 10;
    res += ams*ams*ams;
    
  }
  printf("the result is :%d\n",res);
  if(res == num){
  printf(" %d is amstorng number",num);
  }else{
    printf(" %d is not a amstorng number",num);
  }
}