#include<stdio.h>
#include<ctype.h>
#define SIZE 50
char postfix[SIZE],ch;
int top = -1,stack[SIZE];
int pop()
{
    return (stack[top--]);
}
void push(float num)
{
    stack[++top] = num;
}
void main()
{
    int i=0;
    printf("Enter Postfix expression");
    gets(postfix);
    while (postfix[i]!='\0')
    {
        char ch;
        int num;
        ch = postfix[i];
        if(isalpha(ch))
        {
            printf("Enter value of %c :",ch);
            scanf("%d",&num);
            push(num);
        }
        else
        {
            float op2 = pop();
            float op1 = pop();
            float res;
            switch (ch)
            {
            case '+':   res = op1 + op2;
                push(res);
                break;
            case '-': res = op1 - op2;
                push(res);
                break;
            case '*': res = op1 * op2;
                push(res);
                break;
            case '/': res = op1 / op2;
                push(res);
                break;
            default: printf("NOT SUPPORTED");
            }
        }
        
        i++;
    }
    printf("FINAL ANSWER\t: %d",stack[top]);
}
