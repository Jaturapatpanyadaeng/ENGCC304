#include <stdio.h>

int main() {
    char ID_user [ 11 ] ;
    int working_hrs ;
    float  Salary , income ;
    printf ( "Input the Employyees ID(Max. 10 chars):  \n" ) ;
    scanf ( "%10s", ID_user ) ;
    getchar( );
    printf ( "Input the working hrs:  \n" ) ;
    scanf ( "%d" , &working_hrs) ;
    printf ( " Salary amount/hr: \n " ) ;
    scanf ( "%f" , &Salary ) ;

    income = working_hrs * Salary ;
    printf ("Employess ID = %10s \n " , ID_user ) ;
    printf ("Salary = U$ %d \n " , income ) ;

    return 0 ;
}
