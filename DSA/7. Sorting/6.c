// Write a program to sort an array using insertion sort algorithm.

#include <stdio.h>
#include <conio.h>
#define size 5
void insertion_sort(int arr[], int n);
void main()
{
int arr[size], i, n;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
 scanf("%d", &arr[i]);
}
insertion_sort(arr, n);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
getch();
}
void insertion_sort(int arr[], int n)
{
    int i, j, temp;
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while((temp < arr[j]) && (j>=0))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
// Output
// Enter the number of elements in the array : 5
// Enter the elements of the array : 500 1 50 23 76
// The sorted array is :
// 1  23  20  76  500  6  7  8  9  10