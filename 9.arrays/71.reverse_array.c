// create a program to reverse an array 
// #include<stdio.h>
// void reverse(int arr[],int size,int new_arr[],int *new_size);

// int main(){
//   int arr[7] = { 5, 3, 7, 2, 9, 1, 4};
//   int new_arr[7];
//   int new_size;
// reverse(arr,7,new_arr,&new_size);
// for(int i = 0; i < new_size; i++){
//   printf("%d ",new_arr[i]);
// }

//   return 0;
// }

// void reverse(int arr[],int size,int new_arr[],int *new_size){
//   int j = 0;
//   for(int i = size -1 ; i >= 0; i--){
//     new_arr[j] = arr[i];
//     j++;
//   }
// *new_size = j;
// }

#include<stdio.h>

void swap(int *frist,int *second);
void print_arr(int arr[],int size);
void reverse(int arr[],int size);

int main(){

printf("welcome to reversing array\n");
int arr1[] = { 1, 2, 5, 7, 8, 9, 4, 5};
int arr2[] = { 1, 2, 3, 4, 5};

printf("\n Reverse this arry: \n");
print_arr(arr1,8);
reverse(arr1,8);
printf("\n after reverseing : \n");
print_arr(arr1,8);

printf("\n Reverse this arry: \n");
print_arr(arr2,5);
reverse(arr2,5);
printf("\n after reverseing : \n");
print_arr(arr2,5);

}

void reverse(int arr[],int size){
  for(int i = 0 ; i< size /2 ; i++){
    swap(&arr[i],&arr[size - 1 - i]);
  }
}

void print_arr(int arr[],int size){
  for(int i = 0 ; i < size ; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void swap(int *frist,int *second){


    int temp = *frist;
    *frist = *second;
    *second = temp;
}
