#include<stdlib.h>
#include<stdio.h>
//structure node
typedef struct node 
{
    struct node *llink , *rlink;
    int data;
}node;

node *temp , *ptr , *start = NULL;

// Create node
void create_node()
{
    temp = (node*)malloc(sizeof(node));
    printf("Enter data \t:");
    scanf("%d",&temp->data);
    temp->llink = temp->rlink = NULL;
}
//insertion
void insert()
{
    //create node
    create_node();
    //1st node
    if(start == NULL)
        start = temp;
    else if(temp->data < start->data)   //insertion in beg
    {
        //linking
        temp->rlink = start;
        start->llink = temp;
        start = temp;   //updating start
    }
    else    //general
    {
        ptr = start;
        while(ptr->rlink!=NULL && ptr->data < temp->data)      //till link finished or temp is less than ptr 
            ptr = ptr->rlink;
        
        if(ptr->rlink == NULL && ptr->data<temp->data) // insertion at end
        {
            temp->llink = ptr;
            ptr->rlink = temp;
        }
        else
        {
            temp->rlink = ptr;
            temp->llink = ptr->llink;
            ptr->llink->rlink = temp;
            ptr->llink = temp; 
        }
    }
}

//display
void display()
{   // NO NODE
	if(start==NULL)
		printf("LINK IS NOT THERE");
	else	// NODE PRESENT
	{	
		ptr = start;
		while(ptr!= NULL)
		{
			printf("%d<-->",ptr->data);
			ptr = ptr->rlink;
		}
	}
}

int main()
{
int choice;
	printf("\t\tDOUBLY LINK LIST\n");
	while(1)
	{	printf("1.Insert at the end\n2.Display\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert();
				break;
			case 2: display();
				break;
            default: printf("INVALID CHOICE");
        }
    }
    return 0;
}
