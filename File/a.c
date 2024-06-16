#include <stdio.h>

char calculateGrade(int marks) {
    if (marks >= 80 && marks <= 100) {
        return 'A';
    } else if (marks >= 70 && marks < 80) {
        return 'A';
    } else if (marks >= 65 && marks < 70) {
        return 'B';
    } else {
        return 'F';
    }
}

int main() {
    int marks[5];

    printf("Enter marks for five students:\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudent\tGrade\n");

    for (int i = 0; i < 5; i++) {
        char grade = calculateGrade(marks[i]);
        printf("%d\t\t%c\n", i + 1, grade);
    }

    return 0;
}
