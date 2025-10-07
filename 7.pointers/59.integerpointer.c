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
  int num;
  int *ptr = &num;
  printf("welcome to showcasing integer pointers\n");
  printf("please enter the number :");
  scanf("%d",ptr);

  printf("the value of num is %d\n",*ptr);
  printf("the value of num is %d",num);
  return 0;
}