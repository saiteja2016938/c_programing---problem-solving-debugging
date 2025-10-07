#include<stdio.h>
int main(){

  char name[50];
  // puts("please enter your name:");
  
  // gets(name);
  // puts("Good Mornign ");
  // puts(name);


  printf("please enter your nickname :");
  fgets(name,sizeof(name),stdin);
  printf("Good Morning "); 
  puts(name);

  return 0;
}