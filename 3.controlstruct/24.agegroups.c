// create a program that catogrizes into different age groups (child -below 13 , teen -> above 13 ,  adult -> above 20 below 60 , senior -> above 60  )
#include<stdio.h>

int main(){
  int age;
  printf("welcome to age group calculator ");
  printf("enter your age :");
  scanf("%d",&age);
  if(age < 13){
    printf("you are a child");
  }else if(age < 20){
    printf("you are a teen ager");
  }else if(age < 60){
    printf("you are an adult");
  }else{
    printf("you are a senior");
  }
}