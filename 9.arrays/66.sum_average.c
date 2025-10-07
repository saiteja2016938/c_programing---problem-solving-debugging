// create a program  to find the sum  and average of all the elements in an array.
#include<stdio.h>

int sum(int arr[], int size);
int main(){

  int arr[10];

  printf("welcome to the sum and average of arry\n");
  for(int i = 0; i<10;i++){
    printf("please enter the %dth number :",(i+1));
    scanf("%d", &arr[i]);

  }
  int addition = sum(arr,10);
  float avg = addition/10.0;

  printf("the sum of the numbers is %d and there average is %.2f",addition,avg);

return 0;
}

int sum(int arr[], int size){
  int addition = 0;
  for(int i =0; i < size ;i++){
    addition += arr[i];
  }
  
  return addition;
}