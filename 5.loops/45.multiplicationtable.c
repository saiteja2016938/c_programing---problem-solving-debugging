// create a program using for loop multiplicaiton table for a number
 #include<stdio.h>
 int main(){
  int num;
  printf("welcome to the multiplicaiton table\n");
  printf("please enter the number:");
  scanf("%d",&num);

  for(int i =1 ;i< 11;i++){
    printf("%d x %d = %d\n",num,i,num*i);
  }
  return 0;
 }