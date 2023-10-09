#include<stdio.h>
int main()
{
  float x,y,z;
  printf("Enter two number\n");
  scanf("%f %f",&x,&y);
  z = x * y;
  printf("Multiplication of two number is \n=> %f * %f = %f",x,y,z);
  return 0;
  
}
