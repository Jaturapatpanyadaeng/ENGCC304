#include <stdio.h>

int prime_number(int num){
    if ( num <= 1 )
    {
        return 0 ;
    } //end if
    
    for ( int i = 2 ; i * i <= num; i++ )
    {
        if (num % i == 0)
        {
            return 0 ;
        } //end if
    } //end for
    return 1 ;
    
    
}
int main(){
    int N ;
    printf ( "Enter N : \n" ) ;
    scanf ( "%d" , &N ) ;
    int values [ 5 ] ;
    for ( int i = 0; i < N; i++ ) {
        printf ( "Enter value[%d]: ", i ) ;
        scanf ( "%d", &values[i] ) ;
    } //end for

    printf ( "Index : " ) ;
    for ( int i = 0 ; i < N ; i++ )
    {
        printf ( "%2d", i ) ;
    } //end for
    
    printf ( "\nArray : " ) ;
    for ( int i = 0; i < N; i++ )
    {
        if ( prime_number ( values[i] ) == 1)
        {
            printf ( "%2d" , values[i]) ;
        } //end if
        else 
        {
            printf(" #") ;
        } //end else
    } //end for
} //end main
