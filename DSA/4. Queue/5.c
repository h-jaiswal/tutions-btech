// Write a program to implement a priority queue. using Linked List ( Easier )

#include <stdio.h>
#include <malloc.h>
#include <conio.h>

struct node
{
int data;
int priority;
struct node *next;
};

struct node *start=NULL;
struct node *insert(struct node *);
struct node *delete(struct node *);
void display(struct node *);
int main()
{
int option;
clrscr();
do
{
 printf("\n *****MAIN MENU*****");
 printf("\n 1. INSERT");
 printf("\n 2. DELETE");
 printf("\n 3. DISPLAY");
 printf("\n 4. EXIT");
 printf("\n Enter your option : ");
 scanf( "%d", &option);
switch(option)
 {
 case 1:
 start=insert(start);
break;
 case 2:
 start = delete(start);
break;
 case 3:
 display(start);
break;
 }
}while(option!=4);
}
struct node *insert(struct node *start)
{
    int val, pri;

    struct node *ptr, *p;    // ptr is the node being inserted, and p is the current node pointer

    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the value and its priority : " );
    scanf( "%d %d", &val, &pri);
    ptr->data = val;
    ptr->priority = pri;

    if(start==NULL || pri < start->priority ) // checking if the priority q is empty.
    {
        ptr->next = NULL; // ptr will be the first node
        start = ptr; // start will point to the first node
    }
    else // this will get executed if prio. que. is not empty initially
    {
        p = start;

        while(p->next != NULL && p->next->priority <= pri)
        {
            p = p->next;
        }
           
        ptr->next = p->next;
        p->next = ptr;
    }
    return start;
}
struct node *delete(struct node *start)
{
    struct node *ptr;
    if(start == NULL)
    {
        printf("\n UNDERFLOW" );
        return;
    }
    else
    {
        ptr = start;

        printf("\n Deleted item is: %d", ptr->data);

        start = start->next; // start->next stores address on 2nd node

        free(ptr);  // clearing memory of 1st node
    }

    return start;
}
void display(struct node *start)
{
struct node *ptr;
ptr = start;
if(start == NULL)
 printf("\nQUEUE IS EMPTY" );
else
{
 printf("\n PRIORITY QUEUE IS : " );
while(ptr != NULL)
 {
 printf( "\t%d[priority=%d]", ptr->data, ptr->priority );
 ptr=ptr->next;
 }
}
}



// Output
// *****MAIN MENU*****
// 1. INSERT
// 2. DELETE
// 3. DISPLAY
// 4. EXIT
// Enter your option : 1
// Enter the value and its priority : 5 2
// Enter the value and its priority : 10 1
// Enter your option : 3
// PRIORITY QUEUE IS :
// 10[priority = 1] 5[priority = 2]
// Enter your option : 4