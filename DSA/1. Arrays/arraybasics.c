#include <stdio.h>
#include <stdlib.h>



int main()
{

    int age[100];  

    age[0] = 17;   
    age[1] = 19;
    age[2] = 47;

    


    for( int i = 0; i < 100; i++)
    {
        if( age[i] == 0) // 0 is the default value for int arrays.
        {
            break;
        }
        
        printf( "%d \n", age[i]);
    }


    // age ===>>? 17, 19, 47, 0, 0, 0, 0................., 0;
    int size = 0;

    for( int i = 0; i < 100; i++)
    {
        if( age[i] == 0) // 0 is the default value for int arrays.
        {
            break;
        }
        size++;
    }

    
    for( int i = 0; i < size; i++)
    {
        
        printf( "%d \n", age[i]);
    }

    printf("%d \n", size);


    // int capacity;
    // scanf( "%d", &capacity);

    // int* students = ( int * ) calloc( capacity, sizeof(int) );

    // *(students+49) = 500;   // 50th element will have index 49

    char fname[100] = {'S', 'i', 'd', '\0'};  // Please keep the last char. as \0

    char lname[] = "Jaiswal";

    printf("%s %s", fname, lname);

    return 0;

}