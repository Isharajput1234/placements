//cicrular queue
#include<stdio.h>
#include<stdlib.h>
#define max 20
void insert(int a[],int* front,int* rear,int item)
{
    
    if((*rear+1)%max==(*front))
    {
        printf("queue is overflow");
    }
    else
    {
        
        if((*rear)==-1 && (*front)==-1)
        {
            *rear=0;
            *front=0;
            a[*rear]=item;
        }
        else{
        (*rear)=(*rear+1)%max;
        }
        a[*rear]=item;
    }
}
void delete(int a[],int* front,int* rear)
{   
    int n;
    if(*rear==-1 && *front==-1)
    printf("queue is empty");
    else
    {
        n=a[*front];
        if((*front)==(*rear))
        {
            *front=-1;
            *rear=-1;
        }
        else{
        *front=(*front+1)%max;}
        printf("deleted element is %d",n);
        
    }
}
void display(int a[],int* rear,int* front)
{ 
    int i;
    if(*rear==-1 && *front==-1)
    printf("queue is empty");
    else{
        printf("element of queue");
        for(i=(*front);i!=(*rear);i=(i+1)%max)
        {
            printf("%d",a[i]);
        }
        printf("%d",a[i]);
    }
}
int main()
{
    int choice,front=-1,rear=-1,item,a[max];
    do{
        printf("enter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
         case 1:
          printf("enter the value of item");
          scanf("%d",&item);
          insert(a,&front,&rear,item);
          break;
          case 2:
          delete(a,&front,&rear);
          break;
          case 3:
          display(a,&front,&rear);
          break;
          default:
          exit (0);
            
        }
    }while(choice >= 1 && choice <= 3);
    return 0;
}


