#include<stdio.h>
#include<string.h>

int main(){
  char frist_name[50];
  char second_name[50];

  printf("please enter your frist name :");
  fgets(frist_name, 50, stdin);

  
  printf("please enter your last name:");
  fgets(second_name, 50, stdin);

  strcat(frist_name,second_name);
  printf("your final name is %s",frist_name);

}
