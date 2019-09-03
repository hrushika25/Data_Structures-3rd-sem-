#include<stdio.h>
int gcd(int m,int n)
{ int gcd;
  //To get gcd
  while(m!=n)
   {
     if(m>n)
        m=m-n;
     else
        n=n-m;
   }
  gcd = m;
  return gcd;
}
int lcm(int m,int n)
{
  int lcm;
  lcm = (m*n)/gcd(m,n);
  return lcm;
}
void simplify(int num,int den) // must be up than add cause it is called by it and compiler must know it 1st
{
  int factor = gcd(num,den);
  int num_final,den_final;
  num_final = num/factor;
  den_final = den/factor;
  printf("\n The Simplified result is :%d/%d",num_final,den_final);
}
void add(int num1,int den1,int num2,int den2)
{
  int num3,den3;
  den3 = lcm(den1,den2);
  num3 = num1*(den3/den1) + num2*(den3/den2);
  printf("\n After adding :%d/%d",num3,den3);
  simplify(num3,den3);
}
void multiply(int num1,int den1,int num2,int den2)
{
  int num3,den3;
  den3 = den1*den2;
  num3 = num1*num2;
  printf("\nAfter Multiplication : %d/%d",num3,den3);
  simplify(num3,den3);
}
void main()
{
 int num1,den1,num2,den2;
 printf("enter rational no. in numerator and denominator form\n");
 scanf("%d %d",&num1,&den1);
 printf("Enter another rational no.\n");
 scanf("%d %d",&num2,&den2); 
 add(num1,den1,num2,den2);
  multiply(num1,den1,num2,den2);
}
