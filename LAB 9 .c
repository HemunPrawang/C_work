/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/
#include <stdio.h>

int isPrime(int num) {
    if(num <= 1) return 0 ;
    for(int i = 2 ; i * i <= num ; i++) {
        if (num % i == 0) 
        return 0 ;
    }
    return 1 ;
}

int main() {
    int n ;
    printf("Enter n : ") ;
    scanf("%d", &n) ;

    int a[n] ;
    for(int i = 0 ; i < n ; i++) {
        printf("Index [%d] : " , i) ;
        scanf("%d", &a[i]) ;
    }// end for check array

    printf("Output : \n") ;
    printf("Index : ") ;
    for(int i = 0 ; i < n ; i++) {
        printf("%d  " , i);
    }
    printf("\n") ;
    printf("Array : ") ;
    for(int i= 0 ; i < n ; i++) {
        if(isPrime(a[i])) {
            printf("%d  ", a[i]) ;
        } else {
            printf("#  ") ;
        }
    }// end for Check isprime
    return 0 ;
}//end main function