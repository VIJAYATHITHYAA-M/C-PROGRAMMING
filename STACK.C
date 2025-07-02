#include<stdio.h>
#include<stdlib.h>

void main()
{

int a[10],x,ch,val,top;
top=-1;
printf("\n\n\t********STACK OPERATION****");
while(1)
{
printf("\n\n1.Push");
printf("\n\n2.Pop");
printf("\n\n3.Display");
printf("\n\n4.Exit");
printf("Enter u r choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(top==9)
{
printf("Stack overflow");
}
else
{
printf("Enter the val:");
scanf("%d",&val);
top++;
a[top]=val;
printf("Value inserted");
}
break;
case 2:
if(top==-1)
{
printf("Stack underflow");
}
else
{
x=a[top];
top--;
printf("Poped value",x);
}
break;
case 3:
if(top==-1)
{
printf("stack underflow");
}
else
{
printf("value of stack");
for(int i=top;i>=0;i--)
{
printf("\n%d",a[i]);
}
break;
}
case 4:
exit(1);
break;
default:
printf("Enter a valid num");
break;
}
}
}