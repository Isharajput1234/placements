//single queue
#include<stdio.h>
#include<stdlib.h>
#define max 20
void enqueue(int a[],int* front,int* rear,int item)
{
    if(*rear==max-1)
    printf("queue is full");
    else if(*rear==-1)
    {
        *rear=*front=0;
        a[*rear]=item;
    }
    else
    {
        *rear=*rear+1;
        a[*rear]=item;
    }
}
void dequeue(int a[],int* front,int* rear)
{
    if(*front==-1)
    {
        printf("queue is empty");
    }
    else if(*front==*rear)
    {
    printf("the deleted value is %d",a[*front]);
    *front=*rear=-1;
    }    
    else
    {
        printf("the deleted value is %d",a[*front]);
        *front=*front+1;
    }
}
void tarverse(int a[],int* front,int* rear)
{
    int i;
    if(*front==-1)
    printf("queue is empty");
    else
    {
        for(i=(*front);i<(*rear);i++)
        printf("%d",a[i]);
    }
}
int main()
{
    int choice,front=-1,rear=1,item,a[max];
    do{
        printf("enter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
         case 1:
          printf("enter the value of item");
          scanf("%d",&item);
          enqueue(a,&front,&rear,item);
          break;
          case 2:
          dequeue(a,&front,&rear);
          break;
          case 3:
          tarverse(a,&front,&rear);
          break;
          default:
          exit (0);
            
        }
    }while(choice >= 1 && choice <= 3);
    return 0;
}


