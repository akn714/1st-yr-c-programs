// Task : WAP that tells whether a given year is a leap year or not

#include <stdio.h>

int main() {
    int year;

    // inputting a year
    scanf("%d", &year);
    
    // checking if the year is leap year or not
    if(year%4==0){
        printf("%d is a leap year\n", year);
    }
    else{
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
