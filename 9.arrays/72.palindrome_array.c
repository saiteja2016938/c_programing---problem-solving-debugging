// create a program to check if the array is palindrome or not 

#include<stdio.h>
int is_palindrome(int arr[],int size);
int main(){

  int arr1[7] = { 1, 2, 3, 4, 3, 2, 1};
  int arr2[4] = { 1, 1, 1, 1};
  int arr3[5] = { 1, 1, 1, 1, 2};

  printf("welcome to the world of palindrome\n");
  printf("\nresult of frist array:%d",
  is_palindrome(arr1,7));

  printf("\nresult of second array:%d",
  is_palindrome(arr2,4));

  printf("\nresult of second array: %d",
  is_palindrome(arr3,5));
  
  return 0;

}
int is_palindrome(int arr[],int size){
  for(int i = 0 ; i < size/2 ; i++){
    if(arr[i] != arr[size -1 -i]){
    return 0;
    }
  }
  return 1;
}
