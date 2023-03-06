// Task : WAP to print the Fibonacci series

#include <stdio.h>

int main() {
    int n, a=0, b=1, c, i;
    
    // inputting a number
    scanf("%d", &n);
    
    // printing the fibonacci series up to n numbers
    printf("%d %d ", a, b);
    for(i=2;i<n;i++){
        c = a+b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
    return 0;
}
