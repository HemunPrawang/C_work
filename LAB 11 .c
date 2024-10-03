//จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass

#include<stdio.h>

void arms(int num) {
    int rem , sum = 0, temp ;
    
    temp = num ;

    while(num != 0) {
        rem = num % 10 ;
        sum = sum + (rem * rem * rem) ;
        num = num / 10 ;
    }

    if(temp == sum) {
        printf("%d Pass\n", temp) ;
    } else {
        printf("%d Not pass\n", temp) ;
    }
}

int main() {
    int num ;
    
    printf("Enter number: ") ;
    scanf("%d", &num) ;

    arms(num) ;

    return 0 ;
}