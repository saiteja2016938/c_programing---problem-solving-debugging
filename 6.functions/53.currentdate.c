// call a function print_date that prints the current date 
// define the functioin without any paramenters 
#include<stdio.h>
#include<time.h>

void print_date();
int main(){
  print_date();
  return 0;

}

void print_date(){

  time_t current_time;
  time(&current_time);

  char* date_string = asctime(localtime(&current_time));
  printf("current date is : %s",date_string);
}