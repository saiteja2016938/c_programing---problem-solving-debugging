// create a program to check if the given arrary is sorted.
#include<stdio.h>
int is_sorted(int arr[],int size); 
int main(){
  printf("welcome to checking if array is sorted ");
  int arr1[]={5,8,9,9,10,15}; //increaseing order sorted 
  int arr2[]={76,70,50,12,0}; // decreasing order sorted
  int arr3[]={87,0,67,-98,5,5}; // not sorted 

if(is_sorted(arr1,6)){
  printf("\nfrist array is sorted ");
}else{
  printf("\nfrist arry is not sorted ");
}

if(is_sorted(arr2,6)){
  printf("\nsecond array is sorted ");
}else{
  printf("\nsecond arry is not sorted ");
}

if(is_sorted(arr3,6)){
  printf("\nthird array is sorted ");
}else{
  printf("\n third arry is not sorted ");
}

}

int is_sorted(int arr[],int size){
  int increasing = 1;
  int decreasing = 1;
  for(int i =1 ;i < size ; i++){
    if(arr[i] > arr[i-1]){
      decreasing = 0;
    }else if(arr[i] < arr[i-1]){
      increasing = 0;
    }
  }
  return increasing || decreasing;
}
