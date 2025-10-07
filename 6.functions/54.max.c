// create a function max that takes two float arguments and returns the larger value
#include<stdio.h>

float max(float,float);
int main(){

  float frist , second;

  printf("welcome to the largest valu calculator \n");
  printf("please enter the frist number :");
  scanf("%f",&frist);

  printf("Now enter the second numer:");
  scanf("%f",&second);

  printf("the largest among %f and %f is %.2f ",frist,second,max(frist,second));

}

float max(float frist, float second){

  float large = frist > second ? frist : second;
  return large;
}