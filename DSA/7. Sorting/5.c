// Write a program to enter n numbers in an array. Redisplay the array with elements being
// sorted in ascending order.

#include <stdio.h>

int main()
{
    int i, n, temp, j, arr[10];

    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);

    printf("\n Enter the elements: ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr [i]);
    }


    // Bubble Sort -> 

    for(i=0; i < n; i++)   // i <= n-1
    {
        for(j=0; j < n-i-1; j++)   // j <= n-i-2

        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\n The array sorted in ascending order is :\n");

    for(i=0;i<n;i++)
    {   
        printf("%d\t", arr[i]);
    }
        
    return 0;
}


// Output
// Enter the number of elements in the array : 10
// Enter the elements : 8  9  6  7  5  4  2  3  1  10
// The array sorted in ascending order is :
// 1 2  3  4  5  6  7  8  9  10