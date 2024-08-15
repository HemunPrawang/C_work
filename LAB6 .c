#include <stdio.h>
int main() {
    int i = 0 , j = 0 , n = 0 ;

    printf("Enter Number : ") ;
    scanf("%d", &n) ;

    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            if(n % 2 == 0) {
                if(i == j) {
                    printf("1") ;
                }else {
                    printf("0") ;
                }
            }else {
                if(j == n - i - 1) {
                    printf("1") ;
                }else {
                    printf("0") ;
                }
            }
        } 
        printf("\n") ;
    }return 0 ;
}
