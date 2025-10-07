#include<stdio.h>
int main(){
  char name[] = "saiteja Sagar";
  printf("Array Before Modifing : %s", name);
  name[8] = 's';
  printf("\nArray after Modifying: %s \n\n", name);

  char *nick_name = "saiteja Sagar";
  printf("pointer Before Modifing : %s", nick_name);
  nick_name[8] = 's';
  printf("\npointer after Modifying: %s", nick_name);
  
}