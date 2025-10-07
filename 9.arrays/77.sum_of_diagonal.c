// 77. create a program to find the sum of 2 diagonal elements

#include<stdio.h>
int sum_of_diagonal(int arr[][3],int row, int cols);
int main(){

  printf("welcome to the sum calculator of diagonal elements\n");
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int add = sum_of_diagonal(arr,3,3);
  printf("the sum is %d",add);

}

int sum_of_diagonal(int arr[][3],int row, int cols){
  int sum = 0;
  for(int i = 0 ; i < row; i++){
    for(int j = 0; j < cols; j++){
      if(arr[i] == arr[j] || arr[i] == arr[cols-1-i]){  
        sum += arr[i][j];
      }
    }
  }
  return sum;
}