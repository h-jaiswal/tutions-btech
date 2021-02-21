#include <stdio.h>

// int main()
// {
//     int sum = 0; // sum of 0 numbers is 0
   
//     // sum = f(n) = 1 + 2 + 3 + .... + n

//     for( int i = 0; i < 10; i++ )
//     {
//         sum = sum + num[i];

//     }
//     printf( "\tSum: %d", sum);


//     // n=k, sum = f(k) = 1+2+3+4+.... +kth number ( Iterative)
//     // n=k+1 sum = f(k+1) = 1+2+3+4,.......+ k + k+1

//     // n=k+1,  f ( k+1 ) = f(k) + k+1
    
//     // k+1=n & k = n-1
//     // n=0, f(0) = 0 ( Base Condition for Recusion)
//     // n = n, sum = f(n)  = f(n-1) + n  (Recursive)

//     return 0;
// }


// n=0, f(0) = 0 ( Base Condition for Recusion)
// n = n, sum = f(n)  = f(n-1) + nth number  (Recursive)

int num[10] = { 1,2,3,4,5,6,7,8,9,10};

// Recusive function finding sum of n numbers
int sum(int n)
{
    if ( n == -1 || n == 0 ) // n==-1 is an edge case to handle array index out of bound
    {
        return 0;
    }
    return sum(n-1) + num[n-1];
}

int main()
{
    printf( "%d", sum(10) );
}