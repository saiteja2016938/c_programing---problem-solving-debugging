// write a program to convert input string to uppercase 

#include<stdio.h>
#include<ctype.h>

int main(){
  char text[50];
  printf("welcome to the upper case converter \n");
  printf("please enter your string:");
  fgets(text,sizeof(text),stdin);

  for(int i = 0; text[i] != '\0'; i++){
    text[i] = toupper(text[i]); 
  }

  printf("Hear is your final output\n%s",text);
  return 0;
}