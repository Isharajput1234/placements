//stack inplementation
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 20
void push(int arr[],int* top,int item)
{
    if(*top==max-1)
    {
        printf("stack is already full");
    }
    else
    {
        arr[*top]=item;
        (*top)++;
        printf("Pushed %d onto the stack\n", item);
    }
}
void pop(int arr[],int* top)
{
    if(*top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("pop element is %d",arr[*top]);
        (*top)--;
    }
}
void display(int arr[],int* top)
{
    if(*top==-1)
    printf("stack is full");
    else
    {
        int temp;
        temp=*top;
        while(temp>=0)
        {
            printf("%d",arr[temp]);
            temp--;
        }
    }
}
bool peek(int arr[],int* top)
{
    if(*top==-1)
    return true;
    else
    return false;
}
bool isfull(int arr[],int* top)
{
 if(*top==max-1)
  return true;
  else
  return false;
}
void topelement(int arr[],int* top)
{
    if(*top==-1)
    printf("stack is empty");
    else
    {
        printf("%d",arr[*top]);
    }
}
int main()
{
    int arr[max],item,choice,top=-1;
    do
    {
     printf("enter your choice\n1.push\n2.pop\n3.display\n4.empty\n5.full\n6.topelement");
     scanf("%d",&choice);
     switch (choice)
     {
        case 1:
        printf("enter the element");
        scanf("%d",&item);
        push(arr,&top,item);
        break;
        case 2:
        pop(arr,&top);
        break;
        case 3:
        display(arr,&top);
        break;
        case 4:
        peek(arr,&top);
        break;
        case 5:
        isfull(arr,&top);
        break;
        case 6:
        topelement(arr,&top);
        break;
        case 7:
        exit (0);
        default:
        printf("Invalid choice"); 
     }
     }while(choice >= 1 && choice <= 7);
     return 0;
}