// Write a program to insert a number at a given location in an array.

#include <stdio.h>
#include <conio.h>
int main()
{
int i, n, num, pos, arr[10];
clrscr();
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("\n arr[%d] = ", i);
scanf("%d", &arr[i]);
}
printf("\n Enter the number to be inserted : ");
scanf("%d", &num);
printf("\n Enter the position at which the number has to be added :");
scanf("%d", &pos);
for(i=n-1;i>=pos;i--)
arr[i+1] = arr[i];
arr[pos] = num;
n = n+1;
printf("\n The array after insertion of %d is : ", num);
for(i=0;i<n;i++)
printf("\n arr[%d] = %d", i, arr[i]);
getch();
return 0;
}



// // Write a program to insert a number at a given location in an array.

// #include <stdio.h>
// // #include <conio.h>
// int main()
// {
//     int i, n, num, pos, arr[10];  // 10 is capacity

//     printf("Enter number of Elements: ( <= 10 ): ");

//     scanf("%d", &n);   // here n would be initail size

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter value #%d: ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \n", arr[i]);
//     }

//     printf( "Enter position for new element: ");
//     scanf( "%d", &pos);

//     printf( "Enter value for new element: ");
//     scanf( "%d", &num);

//     if ( pos <= 10 )
//     {
//         arr[pos -1] = num;

//         printf("New element inserted: %d", arr[pos -1]);
//     }
//     else
//     {
//         printf("Position value exceed array capacity( capacity = 10");
//     }

// }