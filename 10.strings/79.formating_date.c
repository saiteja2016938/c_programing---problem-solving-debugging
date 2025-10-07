// use printf with format specifiers to format and print a date string(day,month,year).
#include<stdio.h>
#include<string.h>
int main(){
  char day[10];
  char month[15];
  int year;

  printf("welcome to the formating date\n\n");
  printf("please enter the current day:");
  scanf("%s",day);

  printf("please enter the current month:");
  scanf("%s",month);

  printf("please enter the current year:");
  scanf("%d",&year);

  printf("\nThe current date is %s/%s/%04d",day,month,year);
  return 0;
}