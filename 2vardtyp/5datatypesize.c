// create a program that declares one variable of each of the fundamental datatype(int,float,dobule,char)and prints there size using sizeof() operator.

#include<stdio.h>

int main(){
int integer;
float decimal;
double doub;
char character;
printf("the size of int is %d bytes", sizeof(integer));
printf("\nthe size of float is %d bytes", sizeof(decimal));
printf("\nthe size of dobule is %d bytes", sizeof(doub));
printf("\nthe size of char is %d bytes", sizeof(character));



}