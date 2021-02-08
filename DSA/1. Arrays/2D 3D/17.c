// Write a program to generate Pascal’s triangle.

#include <stdio.h>
#include <conio.h>
int main()
{
int arr[7][7]={0};
int row=2, col, i, j;
arr[0][0] = arr[1][0] = arr[1][1] = 1;
while(row <= 7)
{
arr[row][0] = 1;
for(col = 1; col <= row; col++)
arr[row][col] = arr[row-1][col-1] + arr[row-1][col];
row++;
}
for(i=0; i<7; i++)
{
 printf("\n");
for(j=0; j<=i; j++)
printf("\t %d", arr[i][j]);
}
getch();
return 0;
}
// Output
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1