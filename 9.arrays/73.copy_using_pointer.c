// write a funtion that uses pointer arthematic to copy an array of char into another
#include<stdio.h>

void copy_arr(char arr[],int size ,char new_arr[]);
void print_arr(char arr[],int size);

int main(){

char arr[10] = {'S','A','I',' ' ,'c','o','d','i','n','g'};
char new_arr[10];

printf("welcome to coping array using pointer arthimetic\n\n");

printf("\norginal char array:");
print_arr(arr,10);

copy_arr(arr, 10, new_arr);

printf("\ncopied char array :");
print_arr(new_arr, 10);

return 0;
}

void copy_arr(char *arr,int size ,char *new_arr){
for(int i = 0; i < size ;i++){
  *(new_arr + i) = *(arr + i);
}
}

void print_arr(char arr[],int size){
for(int i = 0; i <size; i++){
  printf("%c", arr[i]);
}
printf("\n");
}
