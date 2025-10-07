// create a program that prints patterns:
// right half pyramid
// #include<stdio.h>
// int main(){
//   int rows;
//   printf("welcome to the printing patterns\n");
//   printf("please enter the number :");
//   scanf("%d",&rows);

// for(int i = 0 ; i <rows; i++ ){
//   for(int j = 0 ;j <=i ;j++){
//     printf("* ");
//   }
//   printf("\n");
// }


// reverse right half pyramid

#include<stdio.h>
int main(){
  int rows;
  printf("welcome to the printing patterns\n");
  printf("please enter the number :");
  scanf("%d",&rows);

for(int i = rows ; i >= 0; i-- ){
  for(int j = 0 ;j <i ;j++){
    printf(" ");
  }
  for(int k = 0 ;k<=rows -i; k++){
    printf("*");
  }
  printf("\n");
}
return 0;
}
