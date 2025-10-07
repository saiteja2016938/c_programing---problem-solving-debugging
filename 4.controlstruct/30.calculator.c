// create a program to create a simple calculator that uses a switch statment
//  to perform basic arthimetic operations like addition subtraction multiplication and division.

// #include<stdio.h>
// int main(){
//    int num1,num2,oper;

//    printf("welcome to the simple calculator :\n");
//    printf("enther the  frist number:");
//    scanf("%d",&num1);
//    printf("enther the  second number:");
//    scanf("%d",&num2);

//    printf("enter a number from(1-5)\n 1 for addition\n2 for subtractin\n3 for multiplicaiton\n4 for divistion\n5 for modulus\nnow enter :");
//    scanf("%d",&oper);



//    switch (oper)
//    {
//    case 1:printf("additon %d:",num1+num2);
//     break;
//    case 2:printf("subtraction %d:",num1-num2);
//     break;
//    case 3:printf("multiplication:%d",num1*num2);
//     break;
//    case 4:printf("divistion :%d",num1/num2);
//     break;
//    case 5:printf("modulo:%D",num1%num2);
//     break;
   
//    default:("enter a valid number form (1 to 5)");
//     break;
//    }
// }

#include<stdio.h>
int main(){
  float frist,second;
  char opr;

  printf("welcome to the calculator\n");
  printf("please enter the frist number:");
  scanf("%f",&frist);
  printf("Now, enter the second number:");
  scanf("%f",&second);

  printf("finally,enter the operation(+,-,*,/)");
  scanf("%c",&opr);

  float res;
  int invalid = 0;
  switch (opr)
  {
  case '+': res = frist + second;
    break;
  case '-': res = frist + second;
    break;
  case '*': res = frist * second;
    break;
  case '/': res = frist / second;
    break;

   
  default:
  invalid = 1;
    break;
  }
if(invalid == 0){
  printf("The result is :%.2f",res);
}else{
    printf("Invalid operator please enter (+,-,*,/):");
}
  return 0;

}