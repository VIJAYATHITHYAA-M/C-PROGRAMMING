#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int q[10],i,x,ch,val,rear,front;
rear=-1;
front=-1;
printf("\n\n\t *****QUEUE OPERATION****");
while(1)
{
printf("\n 1.Enqueue");
printf("\n 2.Dequeue");
printf("\n 3.Display");
printf("\n 4.Exit");
printf("\n Enter u r choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(rear==9)
{
printf("Queue is Full");
}
else
{
printf("\n Enter the value to be inserted:");
scanf("%d",&val);
rear++;
q[rear]=val;
printf("Value inserted");
}
break;
case 2:
if(rear==front)
{
printf("Queue is empty");
}
else
{
x=q[front];
front++;
printf("Del value=%d",x);
}
break;
case 3:
if(front==rear)
{
printf("Queue is empty");
}
else
{
printf("Elements of queue");
for(i=front;i<=rear;i++)
{
printf("\n%d",q[i]);
}
}
break;
case 4:
exit(0);
break;
default:
printf("\n Please enter a valid option");
break;
}
}
}
