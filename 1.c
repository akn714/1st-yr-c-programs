// Task : WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained

#include <stdio.h>

int main() {
    // maximum marks in each subject is taken to be 100
    int m1, m2, m3, m4, m5, sum;
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    sum = m1+m2+m3+m4+m5;
    float page = (float) sum / 5;
    
    printf("Total marks obtained : %d\n", sum);
    printf("Percentage obtained : %.2f%c\n", page, '%');

    return 0;
}
