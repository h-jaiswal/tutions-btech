#include <stdio.h>

int binary_search( int A[], int N,  int val)
{
    int l = 0, h = N-1;

    int mid;

    while ( l <= h )
    {
        mid = ( l + h ) / 2;

        if ( val == A[mid]  )
        {
            return mid;
        }
        else if ( val < A[mid] )
        {
            h = mid - 1;
        }
        else if ( val > A[mid] )
        {
            l = mid + 1;
        }
    }
}

int main()
{
    // WE MUST PASS A SORTED ARRAY TO BINARY_SEARCH()
    int A[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int val = 7;

    int val_index = binary_search( A, 11, val);

    printf( "Index of %d is : %d", val, val_index);
}