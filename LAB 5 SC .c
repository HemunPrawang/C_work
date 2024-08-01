#include <stdio.h>
int main() {
    int score ;
    int result ;
    
    printf("Enter your score : ") ;
    result = scanf("%d",&score) ;
    if (result != 1) {
         printf("Please enter a number only.\n") ;
         return 1 ;
    }switch (score / 5) {
            case 16:
                printf("A!\n") ;
                break ;
            case 15:
                printf("B+!\n") ;
                break ;
            case 14:
                printf("B!\n") ;
                break ;
            case 13:
                printf("C+!\n") ;
                break ;
            case 12:
                printf("C!\n") ;
                break ;
            case 11:
                printf("D+!\n") ;
                break ;
            case 10:
                printf("D!\n") ;
                break ;
            default:
                printf("F!\n") ;
                break ;
        }
    return 0 ;
}
