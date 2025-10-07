// create a program to find number of occurences of an elements in an arry

#include<stdio.h>

int occurrences(int arr[],int size,int elements); 

int main(){

  int arr[] = {3,6,7,98,45,3,6,3,7,71,10};
  printf("welcome to finding element occurences \n");
  int result = occurrences(arr,10,98);
  printf("the number of occurences of 98 are %d\n",result);
  result = occurrences(arr,10,6);
  printf("the number of occurences of 6 are %d\n",result);
  result = occurrences(arr,10,3);
  printf("the number of occurences of 3 are %d\n",result);
  result = occurrences(arr,10,100);
  printf("the number of occurences of 100 are %d\n",result);

  


  return 0;
}

int occurrences(int arr[],int size,int elements){
  int counter =0;
  for(int i = 0; i < size; i++){
    if(arr[i]==elements){

      counter++;
       
    }
    
  }

  return counter;
}