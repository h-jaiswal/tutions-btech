#include <stdio.h>

// fibonacci series = 0 1 1 2 3 5 8 13 21 34 55.......


// 1st term -> 0
// 2nd term -> 1
// nth term -> n-1 th term  +  n-2 th term


int fibonacci( int n )
{
    // if (n== 0)
    // {
    //     return 0;
    // }

    // if (n==1)
    // {
    //     return 1;
    // }

    if ( n==0 || n==1 )
    {
        return n;
    }

    else
    {
        int term = fibonacci(n-1) + fibonacci(n-2);
        printf(" %d", term);
         return term ;
    }
    
   
}

int main()
{
    fibonacci( 10 );
}

// int main() // ITERATIVE
// {
//     int n = 10;  // number of terms
//     int a = 0;
//     int b = 1;

//     printf("%d %d", a, b);  // first two terms

//     // rest of terms
//     for( int i = 0; i < (n-2); i ++ )
//     {
//         int c = a + b;
//         printf(" %d", c);

//         int temp = b;
//         b = c;
//         a = temp;
//     }
// }