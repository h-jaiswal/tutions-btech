// Write a program which illustrates the use of a pointer to a three-dimensional array.
#include <stdio.h>
#include <conio.h>
int main()
{
int i,j,k;
int arr[2][2][2];
int (*parr)[2][2]= arr;
clrscr();
printf("\n Enter the elements of a 2 ¥ 2 ¥ 2 array: ");
for(i = 0; i < 2; i++)
{
for(j = 0; j < 2; j++)
{
for(k = 0; k < 2; k++)
scanf("%d", &arr[i][j][k]);
}
}
printf("\n The elements of the 2 ¥ 2 ¥ 2 array are: ");
for(i = 0; i < 2; i++)
{
for(j = 0; j < 2; j++)
{
for(k = 0; k < 2; k++)
printf("%d", *(*(*(parr+i)+j)+k));
}
}
getch();
return 0;
}
// Output
// Enter the elements of a 2 ¥ 2 ¥ 2 array: 1 2 3 4 5 6 7 8
// The elements of the 2 ¥ 2 ¥ 2 array are: 1 2 3 4 5 6 7 8