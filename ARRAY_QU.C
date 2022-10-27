#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int rear,front,ch,val;
void inst(void);
void delt(void);
void display(void);
void main()
{
rear=-1,front=-1;
clrscr();
printf("Array representation of Queue:");
printf("\nOPERATIONS:\n1.Insert an element\n2.Delete an element\n3.Display\n4.Exit");
while(ch!=4)
{
printf("\nEnter a choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
inst();
break;
case 2:
delt();
break;
case 3:
display();
break;
case 4:
printf("\nExit");
break;
default:
printf("\nEnter a valid choice(1\2\3\4)");
}
}
getch();
}
void inst()
{
if (rear==max-1)
{
printf("\nQueue Overflow");
}
if((front==-1)&&(rear==-1))
{
front=0;
rear=0;
}
else
{
rear=rear+1;
}
printf("\nEnter the element to be inserted:");
scanf("%d",&val);
queue[rear]=val;
}
void delt()
{
if((front==-1)||(front>rear))
{
printf("\nQueue is underflow");
}
else
{
val=queue[front];
if (front==rear)
{
front=-1;
rear=-1;
}
else
{
front+=1;
}
printf("\nValue deleted:");
printf("\nThe deleted value is %d",val);
}}
void display()
{
int i;
if(rear==-1)
{
printf("\nEmpty queue:");
}
else
{
printf("\nThe elements in the queue:");
for(i=front;i<=rear;i++)
{
printf("\n%d\n",queue[i]);
}
}
}
