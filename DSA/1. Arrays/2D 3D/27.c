// Write a program to read and display a 2¥2¥2 array.

#include <stdio.h>
#include <conio.h>
int main()
{
int array[2][2][2], i, j, k;
clrscr();
printf("\n Enter the elements of the matrix");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
scanf("%d", &array[i][j][k]);
}
}
}
printf("\n The matrix is : ");
for(i=0;i<2;i++)
{
 printf("\n");
for(j=0;j<2;j++)
{
 printf("\n");
for(k=0;k<2;k++)
printf("\t array[%d][%d][%d] = %d", i, j, k, array[i]
[j][k]);
}
}
getch();
return 0;
}

// Output
// Enter the elements of the matrix
// 1 2 3 4 5 6 7 8
// The matrix is
// arr[0][0][0] = 1 arr[0][0][1] = 2
// arr[0][1][0] = 3 arr[0][1][1] = 4
// arr[1][0][0] = 5 arr[1][0][1] = 6
// arr[1][1][0] = 7 arr[1][1][1] = 8