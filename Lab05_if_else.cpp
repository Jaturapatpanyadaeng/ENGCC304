#include <stdio.h>

int main(){
    int score ;
    char grade ;
    printf ( "enter score: " ) ;
    if ( scanf ( "%d" , &score ) != 1 ) {
        printf ( "please enter number only. \n ") ;
        return 1 ;
    }

    if ( score > 100 )
    {
        printf ( "Error" ) ;
    }
    
    else if ( score >= 80 && score <=100 ){
        printf ( "A !" ) ;
    }
    else if ( score <= 79 && score >=75 ){
        printf ( "B+ !" ) ;
    }
    
    else if ( score <= 74 && score >=70 ){
        printf ( "B !" ) ;
    }
    
    else if ( score <= 69 && score >=65 ){
        printf ( "C+ !" ) ;
    }
    
    else if ( score <= 64 && score >=60 ){
        printf ( "C !" ) ;
    }
    
    else if ( score <= 59 && score >=55 ){
        printf ( "D+ !" ) ;
    }
    else if ( score <= 54 && score >=50 ) {
        printf ( "D !" ) ;
    }
    else if ( score < 50 && score >= 0 ){
        printf ( "F !" ) ;
    }
    else {
        printf ( "please enter number only." ) ;
    } //end if
    return 0 ;
}//end main function
