#include <stdio.h>

// 0! = 1
// 1! = 1
// 2! = 2 x 1
// 3! = 3 x 2 x 1
// n! = n x n-1 x n-2 x ......... x 2 x 1  ( Interative )

// k ! = k x k-1 ......... x 2 x 1

// (k+1)! = k+1  x  k x k-1 x........2 x 1

// (k+1)! = k+1 x k!

// k+1 => n, k => n-1 

// n! = n x (n-1)!   // ( Recursive )
// Base condtion =>  0! = 1


int factorial( int n )
{
    if ( n == 0 )
    {
        return 1;
    } 

    return n * factorial(n-1) ;
}

int main()
{   
    int n = 4;
    printf( "%d",factorial(n) );  // n=4, n!

    printf( "\n%d",factorial(0) ); // 0!

    printf( "\n%d",factorial(8) );  //  8!

}