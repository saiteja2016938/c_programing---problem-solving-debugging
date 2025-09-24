#include<stdio.h>
int main(){

  int marks;
  printf( "wellcome to grade calculator :");
  printf("please enter your marks :");
  scanf("%d", &marks);

  if(marks > 90){
    printf("you have got A grade ");
  }else if(marks > 75){
    printf("your grade is B");

  }else if( marks > 60){
    printf(" you got grade C");
  }else if(marks > 30 ){
    printf("you got grade D");
  }else{
    printf("failed");
  }


}