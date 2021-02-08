// Write a program to transpose a 3x3 matrix.

#include <stdio.h>
#include <conio.h>
int main()
{
int i, j, mat[3][3], transposed_mat[3][3];
clrscr();
printf("\n Enter the elements of the matrix ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d", &mat[i][j]);
}
}
printf("\n The elements of the matrix are ");
for(i=0;i<3;i++)
{
 printf("\n");
for(j=0;j<3;j++)
printf("\t %d", mat[i][j]);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
transposed_mat[i][j] = mat[j][i];
}
printf("\n The elements of the transposed matrix are ");
for(i=0;i<3;i++)
{
 printf("\n");
for(j=0;j<3;j++)
printf("\t %d",transposed_mat[i][j]);
}
return 0;
}
// Output
// Enter the elements of the matrix
// 1 2 3 4 5 6 7 8 9
// The elements of the matrix are
// 1 2 3
// 4 5 6
// 7 8 9
// The elements of the transposed matrix are
// 1 4 7
// 2 5 8
// 3 6 9