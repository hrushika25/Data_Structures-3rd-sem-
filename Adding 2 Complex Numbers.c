#include<stdio.h>
struct complex
{
  int real;
  int imag;
};
struct complex add(struct complex c1,struct complex c2)
{
 struct complex c3;
 c3.real=c1.real + c2.real;
 c3.imag=c1.imag + c2.imag;
 return c3;
} 
void main()
{ struct complex cc,cs,ca;
  printf("Enter 2 complex no's to add in real and imag form\n");
  scanf("%d %d",&cc.real,&cc.imag);
  printf("enter another complex no.\n");
  scanf("%d %d",&cs.real,&cs.imag);
  printf("adding....\n");
  ca = add(cc,cs);
  printf("Added complex no. is %d + %di\n",ca.real,ca.imag);  
}
