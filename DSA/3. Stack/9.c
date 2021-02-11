// Write a program to implement multiple stacks in the same array.


// While implementing a stack using an array, we had seen that the size of the array must be known in
// advance. If the stack is allocated less space, then frequent OVERFLOW conditions will be encountered.
// To deal with this problem, the code will have to be modified to reallocate more space for the array.
// In case we allocate a large amount of space for the stack, it may result in sheer wastage of
// memory. Thus, there lies a trade-off between the frequency of overflows and the space allocated.
// So, a better solution to deal with this problem is to have multiple stacks or to have more than
// one stack in the same array of sufficient size
// Extending this concept to multiple stacks, a stack can also be used to represent n number of
// stacks in the same array. That is, if we have a STACK[n], then each stack I will be allocated an
// equal amount of space bounded by indices b[i] and e[i]. 


#include <stdio.h>
#include <conio.h>
#define MAX 10
int stack[MAX], topA=-1, topB=MAX;
void pushA(int val)
{
if(topA==topB-1)
 printf("\n OVERFLOW");
else
{
 topA+= 1;
 stack[topA] = val;
}
}
int popA()
{
int val;
if(topA==-1)
{
 printf("\n UNDERFLOW");
 val = -999;
}
else
{
 val = stack[topA];
 topA--;
}
return val;
}
void display_stackA()
{
int i;
if(topA==-1)
 printf("\n Stack A is Empty");
else
{
for(i=topA;i>=0;i--)
 printf("\t %d",stack[i]);
}
}
void pushB(int val)
{
if(topB-1==topA)
 printf("\n OVERFLOW");
else
{
 topB -= 1;
 stack[topB] = val;
}
}
int popB()
{
int val;
if(topB==MAX)
{
 printf("\n UNDERFLOW");
 val = -999;
}
else
{
 val = stack[topB];
 topB++;
}
}
void display_stackB()
{
int i;
if(topB==MAX)
 printf("\n Stack B is Empty");
else
{
 for(i=topB;i<MAX;i++)
 printf("\t %d",stack[i]);
}
}
void main()
{
int option, val;
clrscr();
do
{
 printf("\n *****MENU*****");
 printf("\n 1. PUSH IN STACK A");
 printf("\n 2. PUSH IN STACK B");
 printf("\n 3. POP FROM STACK A");
 printf("\n 4. POP FROM STACK B");
 printf("\n 5. DISPLAY STACK A");
 printf("\n 6. DISPLAY STACK B");
 printf("\n 7. EXIT");
 printf("\n Enter your choice");
 scanf("%d",&option);
 switch(option)
 {
 case 1: printf("\n Enter the value to push on Stack A : ");
 scanf("%d",&val);
pushA(val);
break;
 case 2: printf("\n Enter the value to push on Stack B : ");
 scanf("%d",&val);
pushB(val);
break;
 case 3: val=popA();
 if(val!=-999)
 printf("\n The value popped from Stack A = %d",val);
 break;
 case 4: val=popB();
 if(val!=-999)
 printf("\n The value popped from Stack B = %d",val);
 break;
 case 5: printf("\n The contents of Stack A are : \n");
 display_stackA();
break;
 case 6: printf("\n The contents of Stack B are : \n");
 display_stackB();
break;
 }
}while(option!=7);
getch();
}
// Output
// *****MAIN MENU*****
// 1. PUSH IN STACK A
// 2. PUSH IN STACK B
// 3. POP FROM STACK A
// 4. POP FROM STACK B
// 5. DISPLAY STACK A
// 6. DISPLAY STACK B
// 7. EXIT
// Enter your choice : 1
// Enter the value to push on Stack A : 10
// Enter the value to push on Stack A : 15
// Enter your choice : 5
// The content of Stack A are:
// 15 10
// Enter your choice : 4
// UNDERFLOW
// Enter your choice : 7