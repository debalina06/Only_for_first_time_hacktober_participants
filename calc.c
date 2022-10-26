#include<stdio.h>
int main()
{
  float result,a,b;
  int option;
  char choice;
  do{
  printf("1.addition");
  printf("2.substraction");
  printf("1.multiplication"); 
  printf("1.division");   
  printf("Enter the choice of operation:");
  scanf("%d",&option);
  printf("Enter value of a and b:");
  scanf("%f%f",&a,&b);  
  switch option
  {
    case 1:
      result=a+b;
      printf("the required sum of %f and %f is = %f",a,b,result);
      break;
    case 2:
      result=a-b;
      printf("the required sum of %f and %f is = %f",a,b,result);
      break;
    case 3:
      result=a*b;
      printf("the required sum of %f and %f is = %f",a,b,result);
      break;
    case 4:
      result=a/b;
      printf("the required sum of %f and %f is = %f",a,b,result);
      break;
    default:
      printf("You have entered some invalid option.");
  }
    printf("Do you want to continue:");
    scanf("%c",&choice);
  }
  while(choice=="y");
  return 0;
}
