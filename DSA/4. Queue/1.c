// Write a program to implement a linear queue.

#include <stdio.h>

#define MAX 10 // Changing this value will change length of array

int queue[MAX];
int front = -1, rear = -1;  // first and last index

void insert();
int delete_element();
int peek();
void display();

int main()
{
int option, val;
do
{
printf("\n\n ***** MAIN MENU *****");
printf("\n 1. Insert an element");
printf("\n 2. Delete an element");
printf("\n 3. Peek");
printf("\n 4. Display the queue");
printf("\n 5. EXIT");
printf("\n Enter your option : ");
scanf("%d", &option);
switch(option)
 {
case 1:
 insert();
break;
case 2:
val = delete_element();
if (val != -1)
printf("\n The number deleted is : %d", val);
break;
case 3:
val = peek();
if (val != -1)
printf("\n The first value in queue is : %d", val);
break;
case 4:
display();
break;
 }
}while(option != 5);
return 0;
}


void insert()
{
    int num;
    printf("\n Enter the number to be inserted in the queue : ");
    scanf("%d", &num);

    if(rear == MAX-1)
    {
        printf("\n OVERFLOW");
    }
    else if(front == -1 && rear == -1)  // Queue is empty
    {
        front = rear = 0;

        queue[rear] = num;
    }
    else
    {
        rear++;

        queue[rear] = num;
    }

}

int delete_element()
{
    int val;

    if(front == -1 || front > rear) // Underflow
    {
        printf("\n UNDERFLOW");
        return -1;
    }
    else
    {
        val = queue[front];
        front++;

        if(front > rear)
            front = rear = -1;
            return val;
    }

}
int peek()
{
    if(front==-1 || front>rear)
    {
        printf("\n QUEUE IS EMPTY");
        return -1;
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    int i;
    printf("\n");

    if(front == -1 || front > rear)
    {
        printf("\n QUEUE IS EMPTY");
    }
    else
    {
        for(i = front; i <= rear; i++)
            printf("\t %d", queue[i]);
    }
}

// Output
// ***** MAIN MENU *****"
// 1. Insert an element
// 2. Delete an element
// 3. Peek
// 4. Display the queue
// 5. EXIT
// Enter your option : 1
// Enter the number to be inserted in the queue : 50
