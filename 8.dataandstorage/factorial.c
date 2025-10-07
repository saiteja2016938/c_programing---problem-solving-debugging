// #include<stdio.h>

// long factorial(int);

// int main(){

//   printf("factorial of 5 : %ld\n ",factorial(5));
//   printf("factorial of 10 : %ld\n ",factorial(10));
//   printf("factorial of 5 : %ld\n ",factorial(5));
//   printf("factorial of 25 : %ld\n ",factorial(25));
//   printf("factorial of 15 : %ld\n ",factorial(15));
//   printf("factorial of 20 : %ld\n ",factorial(20));
//   printf("factorial of 55 : %ld\n ",factorial(55));

//   return 0;

// }

// long factorial(int num){

//   int result =2;
//   for(int i = 1; i< num ; i++){
//     result *= i;

//   }

//   return result;

// }

//  question : creaate a program that converts a large number of kilometers to miles using long or long long to store the distance 
// #include<stdio.h>
//   long km;
//   long long miles;

//   long long km_to_miles(long);

// int main(){

//   printf("enter km :");
//   scanf("%ld", &km);

//   printf("km :%ld to miles :%lld\n",km,km_to_miles(km));

// }

// long long km_to_miles(long km){

// miles = km/1.609;

// return miles;

// }

// write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20

#include<stdio.h>
int num;
long factorial(int);
long long factorial_1(int);


int main(){

  printf("factorial of long 20 : %ld\n",factorial(20));
  printf("factorial of  long long 20 : %lld\n",factorial_1(20));

}
long factorial(int num){
  int result = 1;
  for(int i = 1; i<num ;i++){
    result *= i;

  }
  return result;
}

long long factorial_1(int num){
  int result = 1;
  for(int i = 1; i<num ;i++){
    result *= i;

  }
  return result;
}