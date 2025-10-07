// 59. write a program that declares and integer variable and a pointer to it 
// assign a value and print it using pointer 

// #include<stdio.h>
// int main(){
//   printf("welcome to the world of pointers\n");
//   int num = 56;
//   int *ptr = &num;

//   printf("%d",*ptr);

// }

#include<stdio.h>
int main(){
  char character;
  char *ptr = &character;
  printf("welcome to showcasing character pointers\n");
  printf("please enter the character :");
  scanf("%c",ptr);

  printf("the char is %c\n",*ptr);
  printf("the charis %c",character);
  return 0;
}