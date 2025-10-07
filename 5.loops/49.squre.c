//  write a program that contineously reads the integer form user and contineously prints the squre. use an infinate loop and break statment 
// to exit when the special number -1 is entered.
// #include<stdio.h>
// int main(){
//   int num;
//   printf("welcome to the squre printer\n");


//   do{

//   printf("please enter the number :");
//   scanf("%d",&num);
//   printf("the squre is %d\n",num * num);

//   }while(num != -1);
// }

#include<stdio.h>
int main(){
  int num;
  printf("welcome to the squre printer\n ");


  while(1){
  printf("enter the number :");
  scanf("%d",&num);
  if(num == -1) break;
  printf("the squre of %d is %d\n",num,num*num);
  }
  printf("bye bye\n");

}