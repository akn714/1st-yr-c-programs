// Task : WAP that swaps values of two variables using a third variable

#include <stdio.h>

int main() {
    int a, b, temp;
    
    // inputting 2 numbers
    scanf("%d%d", &a, &b);
    
    // print the values before swaping
    printf("a : %d    b : %d\n", a, b);
    
    // swaping the values
    temp = a;
    a = b;
    b = temp;
    
    // printing the values after swaping
    printf("a : %d    b : %d\n", a, b);
    
    return 0;
}
