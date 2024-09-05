#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n ,play = 0 , score = 100 , n_save ;
    do
    {
        printf ( "Do you want to play game (1=play, -1=exit) :" ) ;
        scanf ( "%d" , &play ) ;
        if ( play == 1 )
        {
            srand ( time(NULL) ) ;
            n = rand() %100+1 ;
            n_save = n ;
            printf ( "%d \n",n ) ;
            int Guess , min = 1 , max = 100 ; 
            
            while( 1 )
            {
                printf ( "Guess the winning number (%d - %d) \n" ,min ,max ) ;
                scanf ( "%d" , &Guess ) ;
                if ( Guess == n ){
                    printf ( "That is correct! The winning number is %d . \n" , n_save ) ;
                    printf ( "Score this game: %d \n" , score ) ;
                    break;
                }
                else {
                    if ( Guess > n && score > 0 )
                    {
                        score = score - 10 ;
                        max = Guess - 1 ;
                        printf ( " Sorry, the winning number is HIGHER than %d. (score = %d) \n " , Guess , score ) ;
                    }
                    else if ( Guess < n && score > 0 )
                    {
                        score = score - 10;
                        min = Guess + 1 ;
                    printf ( " Sorry, the winning number is LOWER than %d. (score = %d) \n" , Guess , score ) ;
                    }
                    else if ( score <= 1 )
                    {
                        printf ( "Game over ! \n" ) ;
                        printf ( "That is %d \n" , n ) ;
                        break ;
                    }
                }
            }
        }
    }while (play == 1) ;  
    return 0 ;
}#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n ,play = 0 , score = 100 , n_save ;
    do
    {
        printf ( "Do you want to play game (1=play, -1=exit) :" ) ;
        scanf ( "%d" , &play ) ;
        if ( play == 1 )
        {
            srand ( time(NULL) ) ;
            n = rand() %100+1 ;
            n_save = n ;
            printf ( "%d \n",n ) ;
            int Guess , min = 1 , max = 100 ; 
            
            while( 1 )
            {
                printf ( "Guess the winning number (%d - %d) \n" ,min ,max ) ;
                scanf ( "%d" , &Guess ) ;
                if ( Guess == n ){
                    printf ( "That is correct! The winning number is %d . \n" , n_save ) ;
                    printf ( "Score this game: %d \n" , score ) ;
                    break;
                }
                else {
                    if ( Guess > n && score > 0 )
                    {
                        score = score - 10 ;
                        max = Guess - 1 ;
                        printf ( " Sorry, the winning number is HIGHER than %d. (score = %d) \n " , Guess , score ) ;
                    }
                    else if ( Guess < n && score > 0 )
                    {
                        score = score - 10;
                        min = Guess + 1 ;
                    printf ( " Sorry, the winning number is LOWER than %d. (score = %d) \n" , Guess , score ) ;
                    }
                    else if ( score <= 1 )
                    {
                        printf ( "Game over ! \n" ) ;
                        printf ( "That is %d \n" , n ) ;
                        break ;
                    }
                }
            }
        }
    }while (play == 1) ;  
    return 0 ;
}
