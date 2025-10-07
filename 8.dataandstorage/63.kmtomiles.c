// 63.create a program that converts a large number of km to miles,using long ,long long to store the distance
// #include<stdio.h>
// float kmtomiles(int);
// int main(){
// int num;
// printf("welcome to convert km to miles converter\n");
// printf("please enter the km :");
// scanf("%d",&num);

// printf("%d km = %f miles ",num,kmtomiles(54));

//   return 0;

// }

// float kmtomiles(int a){
//   float miles = a * 0.621371;
//   return miles;
// }

#include<stdio.h>
int main(){

const float MILE_PER_KM = 0.621371;
long kms;
printf("welcome to the distance converter.\n");
printf("please enter the kms:");
scanf("%ld",&kms);

long miles = kms * MILE_PER_KM;
printf("the number of miles are %ld",miles);


}