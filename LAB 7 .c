#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void game() {

    int Random , guessNum , point = 100 ;
    srand( time( NULL ) ) ;
    Random = rand() % 100 + 1 ; // เก็บค่าตัวเลขสุ่มไว้ใน (Random)
    //printf("%d \n", Random) ;   
    printf("Game ready to start (100 pts) \n") ;
    while(1) {
        printf("guess Number (1-100) :  \n") ;
        scanf("%d", &guessNum) ;
        if(guessNum == Random) {
            printf("Correct ! %d \n " , point) ;
            break ;
        }else {
            point -= 10 ;
            if(point == 0) {
                printf("Your point is 0  correct number is (%d) \n" , Random) ;
                break ;
            }
            if(guessNum > Random) {
                printf("Sorry, the winning number is HIGHER (%d pts)\n" , point) ;
            }else {
                printf("Sorry, the winning number is LOWER (%d pts)\n" , point) ;
            } // end if else
        } // end if else
    } // end while
} //end Function

int main () {
    int check = 0 ;

   do
    {
        printf("Do you want to play again [1 = Y 0 = N ] : ") ; 
        scanf("%d" , &check) ; 
        if(check == 0) {
            exit(0) ;
        }else if(check == 1) {
            game() ;
        }else {
            printf("Error !") ;
        }
    } while (1) ; //end do while
} // end Function