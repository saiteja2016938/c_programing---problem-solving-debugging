// read a line of text from the user using fgets and then print it using puts

#include<stdio.h>
#include<string.h>

int main(){
  char name[50];
  printf("please enter the text:");
  fgets(name,sizeof(name),stdin);

  printf("the name you entered is ");
  puts(name);

  return 0;
}