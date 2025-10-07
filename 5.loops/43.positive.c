// create a program that prompts the user to enter a positive number , 
// use do while loop to keep asking for the number until the user enters a valid 
// positive number

#include<stdio.h>
int main(){
  int num;
  printf("welcome to persistent number checker :\n");

  do{
    printf("please enter a positive number :");
    scanf("%d",&num);

  }while(num <=0);

printf("you have sucessfully entered a positive number");

  return 0;
}