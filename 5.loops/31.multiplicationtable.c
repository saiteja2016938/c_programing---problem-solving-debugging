//  develop a program that prints the multiplication table for a given number 
// #include<stdio.h>
// int main(){
//   int num;
//   printf("welcome to printing tables \n");
//   printf("please enter a number :");
//   scanf("%d",&num);

//   for(int i=1 ;i<11;i++){
//     printf("%dx%d=%d\n",num,i,num*i);
//   }

// }

#include <stdio.h>
int main() {
    int num;
    printf("Welcome to printing table\n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}
