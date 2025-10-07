// create a program to search an element in an 2d array
#include<stdio.h>

int search(int arr[][3],int row,int cols,int element);
int main(){

  printf("welcome to searching in 2D array.\n");
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

  int occ = search(arr,3,3,1);
  printf("\n searching for 1 found %d occ",occ);

  occ = search(arr,3,3,5);
  printf("\n searching for 5 found %d occ",occ);

  occ = search(arr,3,3,9);
  printf("\n searching for 9 found %d occ",occ);
 return 0;
}

int search(int arr[][3],int row,int cols,int element){
  int occ = 0;
  for(int i  = 0; i < row; i++){
    for(int j = 0; j < cols; j++){
      if(arr[i][j] == element){
        occ++;
      }
  }
  
  }
  return occ;
}