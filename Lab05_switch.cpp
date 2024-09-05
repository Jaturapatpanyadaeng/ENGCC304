#include <stdio.h>

int main(){
    int score ;
    int grade ; 
    printf ( "enter score: ") ;
    scanf ( "%d", &score ) ;

    switch ( score / 5)
    {
    case 20 :
    case 19 : 
    case 18 :
    case 16 : 
        printf ("A !" ) ; 
        break ;
    case 15 :
        printf ( "B+ !") ; 
        break ;
    case 14 :
        printf ( "B !") ;
        break ;
    case 13 :
        printf ( "C+ !") ;
        break ;
    case 12 :
        printf ( "C !") ;
        break ;
    case 11 :
        printf ( "D+ !") ;
        break ;
    case 10 :
        printf ( "D !") ;
        break ;
    case 9 :
    case 8 :
    case 7 :
    case 6 :
    case 5 :
    case 4 :
    case 3 :
    case 2 :
    case 1 : 
        printf ( "F !" ) ; 
        break;
    default:
        printf ( "please enter number only." ) ;
        break;
    }//end switch
    return 0 ;
}//end main function
