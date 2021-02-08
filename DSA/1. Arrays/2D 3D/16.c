// Write a program to I/O the elements of a 2D array.

#include <stdio.h>
#include <conio.h>
int main()
    {
        // 2 by 3 matrix.
        // arr[2] = (1, 2, 3) , (4, 5, 6)

        // int arr[2][3] = { 1, 2, 3, 4, 5, 6};

        int arr[2][3];

        int r, c;
        // Input the matrix/ 2D array
        for( int r=0; r < 2; r++)
        {
            for( int c=0; c < 3; c++)
            {
                // r is row index, and c is col. index
                // arr[r][c] is the element at rth row and cth coloumn

                printf("arr[%d][%d] aka Element in row #%d column #%d: \n", r, c, r+1, c+1 );
                scanf("%d", &arr[r][c]); 
            }
        }

        //Print it
        for( int r=0; r < 2; r++)
        {
            for( int c=0; c < 3; c++)
            {
                printf("\t%d", arr[r][c]);
            }
            printf("\n");
        }

return 0;
}
// Output
// 12 34
// 56 32