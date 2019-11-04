/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}node;

node *temp,*ptr,*last=NULL;
void create_node()
{
    temp = (node*)malloc(sizeof(node));
    printf("\nEnter data");
    scanf("%d",&temp->data);
    temp->link = NULL;
}

void push()
{
    create_node();
    if(last == NULL)
    {
        last = temp;
        temp->link = last;
    }
    else
    {
        temp->link = last->link;
        last->link = temp;
        last = temp;
    }
}

void pop()
{
    if(last == NULL)
    {
        printf("Stack Underflow");
    }
    else if(last->link==last)
    {
        free(last);
        last = NULL;
    }
    else
    {
        ptr = last->link;
        ptr = ptr->link;
        free(ptr);
    }
}

void display()
{
    if(last == NULL)
    {
        printf("Stack is EMPTY");
    }
    else if(last->link == last)
    {
        printf("%d\n",last->data);
    }
    else
    {
        ptr = last->link;
        
        while(ptr!=last->link)
        {
            printf("%d-->",ptr->data);
            ptr = ptr->link;
        }
    }
}
int main()
{
    int choice;
	printf("Stacks using Circular Linked List\n");
	printf("Insert and Delete to the front of the list\n");
	
	for(;;)
	{
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("Choice:\t");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
			    push();
				break;
			
			case 2:
                pop();
				break;
				
			case 3:
				display();
				
				break;
				
			default:
				exit(0);
		}
	}

    
    return 0;
}
