
#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push()
{
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if (top==n-1)
    {
        printf("Stack is overfull\n");
    }
    else
        {top++;
    stack[top]=x;
    printf("%d is inserted\n",x);
        }
}
void pop()
{
    if(top==-1)
        printf("Stack is underflow\n");
        else{int deleted_value=stack[top];
        printf("%d is deleted\n",deleted_value);
        top--;
        }

}
void peek()
{

    if (top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Peek is:%d\n",stack[top]);
    }
}
void display ()
{
    if (top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    { printf("elements of stack:\n ");
        for(int i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
}
int main()
{
    int choice;
    int running=1;
    while(running)
    {
        printf("\nStack menu is:\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n 5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();break;
            case 2:pop();break;
            case 3:peek();break;
            case 4:display();break;
            case 5: printf("Exiting program.........\n");running=0;
            break;
            default:printf("Invalid choice\n");
        }
    }
}
