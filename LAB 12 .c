#include <stdio.h>

struct Student {
    char name[50];
    int student_id;
    float subject1;
    float subject2;
    float subject3;
    float subject4;
    float subject5;
};

char calculateGrade(float score) {
    if(score >= 80) {
        return 'A' ;
    } else if(score >= 70) {
        return 'B' ;
    } else if(score >= 60) {
        return 'C' ;
    } else if(score >= 50) {
        return 'D' ;
    } else {
        return 'F' ;
    }
}

float calculateAverage(struct Student s) {
    return (s.subject1 + s.subject2 + s.subject3 + s.subject4 + s.subject5) / 5.0 ;
}

void printStudentGrades(struct Student s) {
    printf("Student Name: %s\n", s.name);
    printf("ID Student: %d\n", s.student_id);
    printf("SUB 1: %.2f - Grade: %c\n", s.subject1, calculateGrade(s.subject1));
    printf("SUB 2: %.2f - Grade: %c\n", s.subject2, calculateGrade(s.subject2));
    printf("SUB 3: %.2f - Grade: %c\n", s.subject3, calculateGrade(s.subject3));
    printf("SUB 4: %.2f - Grade: %c\n", s.subject4, calculateGrade(s.subject4));
    printf("SUB 5: %.2f - Grade: %c\n", s.subject5, calculateGrade(s.subject5));
    
    float average = calculateAverage(s);
    printf("Average Score: %.2f\n", average);
    printf("Average Grade: %c\n", calculateGrade(average));
    
    printf("\n");
}

int main() {
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter Student %d\n", i + 1);
         
        printf("Student Name: ");
        scanf(" %[^\n]", students[i].name);
        
        printf("ID Student: ");
        scanf("%d", &students[i].student_id);
        
        printf("SUB 1: ");
        scanf("%f", &students[i].subject1);
        
        printf("SUB 2: ");
        scanf("%f", &students[i].subject2);
        
        printf("SUB 3: ");
        scanf("%f", &students[i].subject3);
        
        printf("SUB 4: ");
        scanf("%f", &students[i].subject4);
        
        printf("SUB 5: ");
        scanf("%f", &students[i].subject5);
        
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        printStudentGrades(students[i]);
    }

    return 0;
}
