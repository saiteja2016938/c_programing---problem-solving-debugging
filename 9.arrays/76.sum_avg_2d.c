// create a program to do sum and average of all the elements of 2d - array
#include<stdio.h>
void sum_avg(int arr[][3], int row, int cols, int *sum, float *avg);
int main(){
printf("welcom to the sum and avg of 2d array\n");
int arr[3][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

int sum; 
float avg;
sum_avg(arr,3,3,&sum,&avg);
printf("the sum is %d and average is %.2f",sum,avg);

}

void sum_avg(int arr[][3], int row, int cols, int *sum, float *avg){
  *sum = 0;
  for(int i = 0; i < row; i++){
    for(int j = 0; j < cols; j++){
      *sum += arr[i][j]; 
    }
  }
*avg = *sum / 9.0;
}

