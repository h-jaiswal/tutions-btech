// In a small company there are five salesmen. Each salesman is supposed to sell three
// products. Write a program using a 2D array to print (i) the total sales by each salesman
// and (ii) total sales of each item.
#include <stdio.h>
#include <conio.h>
int main()
{
int sales[5][3], i, j, total_sales=0;
//INPUT DATA
printf("\n ENTER THE DATA");
printf("\n *****************");
for(i=0; i<5; i++)
{
printf("\n Enter the sales of 3 items sold by salesman %d: ", i+1);
for(j=0; j<3; j++)
scanf("%d", &sales[i][j]);
}
// PRINT TOTAL SALES BY EACH SALESMAN
for(i=0; i<5; i++)
{
total_sales = 0;
for(j=0; j<3; j++)
total_sales += sales[i][j];
printf("\n Total Sales By Salesman %d = %d", i+1, total_sales);
}
// TOTAL SALES OF EACH ITEM
for(i=0; i<3; i++)// for each item
{
total_sales=0;
for(j=0; j<5; j++)// for each salesman
total_sales += sales[j][i];
printf("\n Total sales of item %d = %d", i+1, total_sales);
}
getch();
return 0;
}
// Output
// ENTER THE DATA
// *****************
// Enter the sales of 3 items sold by salesman 1: 23 23 45
// Enter the sales of 3 items sold by salesman 2: 34 45 63
// Enter the sales of 3 items sold by salesman 3: 36 33 43
// Enter the sales of 3 items sold by salesman 4: 33 52 35
// Enter the sales of 3 items sold by salesman 5: 32 45 64
// Total Sales By Salesman 1 = 91
// Total Sales By Salesman 2 = 142
// Total Sales By Salesman 3 = 112
// Total Sales By Salesman 4 = 120
// Total Sales By Salesman 5 = 141
// Total sales of item 1 = 158
// Total sales of item 2 = 198
// Total sales of item 3 = 250

