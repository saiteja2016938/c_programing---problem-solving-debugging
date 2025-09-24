// given an integer value and convert it into floting point value and print both
#include<stdio.h>

int main(){
int number;
printf("please enter the number :");
scanf("%d",&number);

float floating = number;
printf("\n original number is :%d",number);
printf("\n float converted (imp conv)is :%f", floating);
printf("\n float converted (expli conv)is :%f",(float)number); 

return 0;


}