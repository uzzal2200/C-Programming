#include <stdio.h>

// Function to calculate GPA based on the provided grading criteria
char calculateGrade(int marks) {
    if (marks >= 80 && marks <= 100) {
        return 'A';
    } else if (marks >= 70 && marks < 80) {
        return 'B';
    } else if (marks >= 65 && marks < 70) {
        return 'C';
    } else {
        return 'F';
    }
}

int main() {
    // Marks for five students in different subjects
    int bangla = 89, english = 88, mathematics = 87, ICT = 97, biology = 77;

    // Calculate GPA for each subject
    char gradeBangla = calculateGrade(bangla);
    char gradeEnglish = calculateGrade(english);
    char gradeMathematics = calculateGrade(mathematics);
    char gradeICT = calculateGrade(ICT);
    char gradeBiology = calculateGrade(biology);

    // Output the grades for each subject
    printf("Student 1 - Bangla: %c\n", gradeBangla);
    printf("Student 2 - English: %c\n", gradeEnglish);
    printf("Student 3 - Mathematics: %c\n", gradeMathematics);
    printf("Student 4 - ICT: %c\n", gradeICT);
    printf("Student 5 - Biology: %c\n", gradeBiology);

    return 0;
}
