// 83.write a function that takes a string and reverse it in place.
#include<stdio.h>
#include<string.h>

void reverse_string(char str[]);

int main(){
char text[100];
printf("welcome to the string reversal");
printf("please enter the string :");
fgets(text,100,stdin);

puts("orginal string before reversing");
puts(text);
reverse_string(text);
puts("text after reversing ");
puts(text);


}
void reverse_string(char str[]){
  int length = strlen(str);
  for(int i = 0; i < length/2; i++){
    char temp = str[i];
    str[i] = str[length -1 -i];
    str[length -1 -i] = temp;
  }
}
