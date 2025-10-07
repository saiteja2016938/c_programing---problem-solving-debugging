#include<stdio.h>

int main(){

  int a,b,c,d;
  
  printf("please enter the frist side:");
  scanf("%d",&a);  
  printf("please enter the second side:");
  scanf("%d",&b);  
  printf("please enter the third side:");
  scanf("%d",&c);  
  printf("please enter the fourth side:");
  scanf("%d",&d);

 int perimeter = a+b+c+d;
 printf("\n perimeter of your shape is %d",perimeter);
 
}