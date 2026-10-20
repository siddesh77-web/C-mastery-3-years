#include<stdio.h>

main ( )
{
    int c ;
    c = sum ( );
    printf ("%d", c );
}

int sum ( ) // Function definition
{
    int a = 10, b = 20, z ;
    z = a + b;
    return z ;
}