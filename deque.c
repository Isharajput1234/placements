//deque
#include<stdio.h>
#include<stdlib.h>
#define max 20
void insertfront(int deque[],int* front,int* rear,int item)
{
    if(*front=(*rear+1)%max)
    {
        printf("overflow");
    }
    else if(*front==-1 && *rear==-1)
    {
        *front=*rear=0;
        deque[*front]=item;
    }
    else if (*front==0)
    {
        *front=max-1;
        deque[*front]=item;
    }
    else 
    {
        *front=*front-1;
        deque[*front]=item;
    }
}
void insetrear(int deque[],int* front,int* rear,int item)
{
    if(*front==(*rear+1)%max)
    {
        printf("overflow");
    }
    else if(*front==-1 && *rear==-1)
    {
        *front=*rear=0;
    }
    else if(*rear=max-1)
    {
        *rear=0;
        deque[*rear]=item;
    }
    else
    {
        *rear=0;
        deque[*rear]=item;
    }
}
void display(int deque[],int* rear,int* front)
{
    int i;
    i=*front;
    printf("element in a deque are:");
    while(i!=(*rear))
    {
        printf("%d",deque[i]);
        i=(i+1)%max;
    }
    printf("%d",deque[*rear]);
}
//first value of deque
void getfront(int deque[],int* rear,int* front)
{
    if(*front==-1 && *rear==-1)
    {
        printf("deque is empty");
    }
    else
    {
        printf("the value of element at front is: %d",deque[*front]);

    }
}
//to print last value of deque
void getrear(int deque[],int* front,int* rear)
{
    if(*front==-1 && *rear==-1)
    {
        printf("deque is empty");
    }
    else
    {
        printf("the value of the element is %d",deque[*rear]);
    }

}
void deleterear(int deque[],int* rear,int* front)
{
    if(*rear==-1)
    {
        printf("dqeue is empty");
    }
    else if(*rear==*front)
    {
        *front=-1;
        *rear=-1;
    }
    else if(*rear==0)
    {
        *rear=max-1;
    }
    else
    {
        *rear=*rear-1;
    }
}
void deletefront(int deque[],int* front,int* rear)
{
    if(*front==-1)
    {
        printf("empty");
    }
    else if(*front==*rear)
    {
        *rear=-1;
        *front=-1;
    }
    else if(*front==max-1)
    {
        *front=0;
    }
    else
    {
        *front=*front+1;
    }
}
int main()
{
    int deque[max],front=-1,rear=-1,choice,item;
    do
    {
        printf("enter choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("input element ");
            scanf("%d",&item);
            insertfront(deque,&front,&rear,item);
            break;
            case 2:
            printf("input element ");
            scanf("%d",&item);
            insetrear(deque,&front,&rear,item);
            break;
            case 3:
            display(deque,&front,&rear);
            break;
            case 4:
            getfront(deque,&front,&rear);
            break;
            case 5:
            getrear(deque,&front,&rear);
            break;
            case 6:
            deleterear(deque,&front,&rear);
            break;
            case 7:
            deletefront(deque,&front,&rear);
            break;
            default:
            exit (0);
      }
    } while (choice >= 1 && choice <= 7);
    return 0;    
}