// #include<stdio.h>

// void swap(int*,int*);

// int main(){

//   int x = 4;
//   int y = 87;
//   printf("value of x = %d , value of y = %d\n",x,y);
//   swap(&x,&y);
//   printf("value of x = %d , value of y = %d\n",x,y);
// }

//   void swap(int* ptr1, int* ptr2){
//     printf("value of x = %d , value of y = %d\n",*ptr1,*ptr2);
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
//     printf("value of x = %d , value of y = %d\n",*ptr1,*ptr2);
// }
// write a program that declares an integer variable and a pointer to it assigne a value  and print it using the pointerr 
 
// #include<stdio.h>

// int main(){
//   int i = 5;
//   int *j = &i;

//   printf("value of i :%d ",*j);

// }

// 5.write a program to change the  value of an integer variable using a pointer and the *operato
// #include<stdio.h>

// int main(){
//   int i = 5;
//   int *j = &i;

//   printf("value of i :%d ",*j);

//   *j = 6;

//   printf("value of i :%d ",i);

// }

// #include <stdio.h>

// int main() {
//     char c;          // a normal char variable
//     char *p = &c;    // pointer to char

//     printf("Enter a character: ");
//     scanf(" %c", p);   // read directly into pointer

//     printf("The character is: %c\n", *p);  // print using pointer

//     return 0;
// }

// implement a void minmax(int*a ,int*b,int*min,int*max)function that takes 
// two interger pointers a and b as input and assigns the smaller value to min 
//  and larger value to max using call by referance write a main function to test it 
// with different values 


