#include<stdio.h>
int fact(int n)
{
  if(n>1)
   return n*fact(n-1);
  else
   return 1; //For the case when imput is 0
}
void main()
{ int a,result;
  printf("Enter the positive no. whose factorial has to be found\n");
  scanf("%d",&a);
  result = fact(a);
  printf("Factorial of %d is : %d\n",a,result); 
}
