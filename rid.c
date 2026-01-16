#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5

void push();
void pop();
void display();

int stack[MAXSIZE];
int top=-1;

int main()
{
	int choice;
	while(1)
	{
		printf("\n STATIC IMPLEMENTATION OF STACK");
		printf("\n -------------------------");
		printf("\n 1. PUSH");
		printf("\n 2. POP");
		printf("\n 3. DISPLAY");
		printf("\n 4. EXIT");
        printf("\n -------------------------");
        printf("\n Enter your choice[1/2/3/4]:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
			        break;
			case 2: pop();
			        break;        
			case 3: display();
			        break;
			case 4: exit(0);
			default: printf("\n\n Invalid choice");        
		}		
		getch();
	}
}
void push()
{
	int num;
	if(top==MAXSIZE-1)
	{
		printf("\n\n Stack is full ");
		return;
	}
	printf("\n\n Enter the element to be pushed in stack:");
	scanf("%d",&num);
	top++;
	stack[top]=num;
}
void pop()
{
	int num;
	if(top==-1);
	{
		printf("\n\n Stack is empty ");
		return;
	}
	num=stack[top];
	printf("\n\n Element popped from stack: %d",num);
	top--;
}
void display()
{
	if (top==-1)
	{
		printf("\n\n Stack is empty ");
		return;
	}
	printf("\n\n Stack element are : \n");
	for(int i=top;i>=0;i--)
	printf("Stack[%d]:%d\n",i,stack[i]);
}
