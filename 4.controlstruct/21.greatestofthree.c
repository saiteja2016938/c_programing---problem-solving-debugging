#include<stdio.h>

int main(){
int frist, second , third;
printf("please enter your frist number :");
scanf("%d",&frist);
printf("Now enter the second number :");
scanf("%d",&second);
printf("finally enter the third number :");
scanf("%d",&third); 

if(frist > second && frist >> third){
  printf("%d is the greatest",frist);
}else if(second > third){
  printf("%d is the greatest ",second);
}else{
  printf("%d is the greatest ",third);
}
}