// Write a program to implement Warshall’s algorithm to find the path matrix.
#include <stdio.h>
#include <conio.h>
void read (int mat[5][5], int n);
void display (int mat[5][5], int n);
void mul(int mat[5][5], int n);
int main()
{
int adj[5][5], P[5][5], n, i, j, k;
printf("\n Enter the number of nodes in the graph : ");
scanf("%d", &n);
printf("\n Enter the adjacency matrix : ");
read(adj, n);
clrscr();
printf("\n The adjacency matrix is : ");
display(adj, n);
	 for(i=0;i<n;i++)
{
	 	 for(j=0;j<n;j++)
 {
	 	 	 if(adj[i][j] == 0)
	 	 	 	 P[i][j] = 0;
 else
 P[i][j] = 1;
 }
 }
	 for(k=0; k<n;k++)
{
	 	 for(i=0;i<n;i++)
 {
	 	 	 for(j=0;j<n;j++)
 P[i][j] = P[i][j] | ( P[i][k] & P[k][j]);
 }
}
printf("\n The Path Matrix is :");
display (P, n);
getch();
	 return 0;
}
void read(int mat[5][5], int n)
{
int i, j;
	 for(i=0;i<n;i++)
{
	 	 for(j=0;j<n;j++)
 {
 printf("\n mat[%d][%d] = ", i, j);
 scanf("%d", &mat[i][j]);
 }
}
}
void display(int mat[5][5], int n)
{
int i, j;
	 for(i=0;i<n;i++)
        {
            printf("\n");
	 	 for(j=0;j<n;j++)
            printf("%d\t", mat[i][j]);

        }
}

// Output
// The adjacency matrix is
// 0	 1	 1	 0
// 0	 0	 1	 1	
// 0	 0	 0	 1
// 1	 1	 0	 0
// Graphs 417
// The Path Matrix is
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1