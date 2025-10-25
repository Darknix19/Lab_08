#include <stdio.h>

int main() {
    // Temperature Record System
    float temp[7][3] = {
        {30.5, 35.2, 28.0},
        {31.0, 36.1, 27.5},
        {29.8, 34.0, 26.9},
        {32.2, 37.5, 29.0},
        {30.0, 33.8, 27.2},
        {31.5, 35.0, 28.3},
        {29.9, 34.5, 26.7}
    };

    printf("Temperature Table (Morning, Afternoon, Night):\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%.1f ", temp[i][j]);
        }
        printf("\n");
    }

    printf("\nAverage Temperature for Each Day:\n");
    for (int i = 0; i < 7; i++) {
        float sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += temp[i][j];
        }
        printf("Day %d: %.2f\n", i + 1, sum / 3);
    }

    // Student Marks Analysis
    int marks[5][3] = {
        {80, 75, 90},
        {60, 70, 65},
        {78, 82, 88},
        {92, 85, 89},
        {55, 60, 58}
    };

    printf("\nTotal Marks of Each Student:\n");
    for (int i = 0; i < 5; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        printf("Student %d: %d\n", i + 1, total);
    }

    printf("\nAverage Marks of Each Subject:\n");
    for (int j = 0; j < 3; j++) {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i][j];
        }
        printf("Subject %d: %.2f\n", j + 1, (float)sum / 5);
    }

    return 0;
}
