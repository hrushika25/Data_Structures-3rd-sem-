#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 30
char postfix[SIZE],infix[SIZE],s[SIZE];
int top = -1;

void push(char ch)
{
   if(top == (SIZE-1))
    {
      printf("\nStack Overflow");
    }
   else
    {
      top =top+1;
      s[top]=ch;
    }
}

char pop()
{
   
    
      return(s[top--]);    // we dont use condition here bc then it requires a return type and then we cant give it one
//VEEEERRRRYYYY IMMMMMMPPPPPP!!!!!!!!!!!!!!!!!!!
      
    
}

int isoperator(char b)        //isoperator : returns 1 if operator otherwise 0
{
   if(b=='+'||b=='-'||b=='*'||b=='/'||b=='^')
      return 1;
   else
      return 0;
}

int precedence(char a)     // checks priority of operators
{
  switch(a)
   {
	case '^':return(4);
                 break;
        case '*':
        case '/':return(3);
                 break;
        case '+':
        case '-':return(2);
                 break;
        default :return(1);
   }
}

void main()
{  
   int i=0,j=0; 
   char ch,temp;
   printf("Enter the infix expression\n");
   gets(infix);
   
   while(infix[i]!='\0')
     {  
	ch = infix[i];
        
	if(isalpha(ch))
	{
	  postfix[j]=ch;
          j++;
	}
	else if(isoperator(ch)==1)      // isoperator fn called
	{
	   if(ch!='^')
	     {
	       while(top!=-1 && precedence(s[top])>=precedence(ch)) //precedence fn called
		{
		   postfix[j]=pop();
                   j++;
		}
 	     }
	  push(ch);
	}
        else if(ch=='(')
	{
	  push(ch); 
	}
	else if(ch==')')
	{
	  while(s[top]!='(')
	    {
		postfix[j]=pop();
		j++;
	    }
	  temp = pop();
	}
        else
        {
          printf("invalid character");
        }
      i++;
     }
   while(top>-1)
     {
	postfix[j]=pop();
	j++;
     }
   postfix[j]='\0'; //marking the end of the postfix array

   
   puts(postfix);
}
