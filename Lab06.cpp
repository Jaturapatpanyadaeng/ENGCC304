#include <stdio.h>

int main() {
    int number;
    printf( "Enter Your Number: " );
    scanf( "%d", &number );

    for ( int i = 0; i < number; i++ ) {
        printf( "\n" );
        for ( int j = 0; j < number; j++ ) {
            printf( i == (number % 2 == 0 ? j : number - j - 1) ? "1 " : "0 " );
        } //end for
    } // end for
    return 0 ;
} //end Function
