// 81.create a simple text based user login system that compares and stores password string using strcmp

#include<stdio.h>
#include<string.h>

int main(){

  const char STORED_PASSWORD[] = "SaiRAM";
  char password[50];

  printf("Welcome to the secured system\n");
  printf("please enter your password :");
  scanf("%s",password);
  // fgets(password,sizeof(password),stdin);

  if(strcmp(password,STORED_PASSWORD) == 0){
    puts("Acesses Granted to the system");
  }else{
    puts("Acessed Denied to the system");
  }
  return 0;
}