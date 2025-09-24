// create a program based on the students score categorize as high modrate or low using ternary operator  (high for score > 80, modrate for  50 -80 ,low for <50)

#include<stdio.h>
int main(){
  int score;
  printf("enter the score :");
  scanf("%d", &score);
  score > 80 ? printf("higest")
             : (score >50 ? printf("modrate")
                          :printf("lowest"));
  return 0;
}
