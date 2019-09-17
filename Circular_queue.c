#include<stdio.h>
#define SIZE 30
int CQ[SIZE],front =-1,rear=-1,iem,d_item;
void insert()
{
   if((rear==front-1)||(front==0 && rear==SIZE-1))   //FULL CIRCULAR QUEUE CONDITION
     {
	printf("\nCircular Queue is full");
     }
   else
     {
	printf("\nEnter the item");
        scanf("%d",&item);
        if(front==rear==-1)                //Initially CIRCULAR QUEUE IS EMPTY
           front=0

        rear = (rear+1)%SIZE            //INCREMENTATION CONDITION FOR CIRCULAR QUEUE
        CQ[rear]=item;
         
     }
}

void delete()
{
  if(front==rear==-1)
     printf("\nUnderflow!");
  else
   {
     CQ[front] = d_item;
     printf("\nDeleting item %d",d_item);
     if(front == rear)              // Only one element in CIRCULAR QUEUE LEFT
        front = rear = -1
     else
        front=(front+1)%SIZE        //INCREMENTATION CONDITION FOR CIRCULAR QUEUE
   }
}

void display()
{
   for(i=front;i!=rear;i=(i+1)%SIZE)
     {
       printf("%d",CQ[i]);
     }
   printf("%d",CQ[i]);              //cause the rear gets left out in for loop
}

