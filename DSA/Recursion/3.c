// Direct, Tail
#include <stdio.h>

void print( int n )
{   
    // base case
    if ( n == 0 )
    {
        return;
    }

    printf( "%d", n);

    print(n-1); // tail 
}
int main()
{
    print(10);
}




// // Indirect, Tail

// #include <stdio.h>

// void print( int n )
// {   
//     // base case
//     if ( n == 0 )
//     {
//         return;
//     }

//     printf( "%d\n", n);

//     print2(n-1); // tail recursion
// }

// void print2(int k)
// {
//     print(k);
// }


// int main()
// {
//     print(10);
// }
