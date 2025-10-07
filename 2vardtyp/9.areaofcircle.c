#include<stdio.h>
int main(){
  const float PI =3.14159;
  int radius;

  printf("the enter the radius of the cirle  in cm:");
  scanf("%d",&radius);
  printf("the area of the circle is %f cm",PI * radius * radius);
}
