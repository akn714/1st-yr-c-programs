// Task : WAP to find the factorial of a given number

#include <stdio.h>

int main() {
    int n, fact = 1, i;
    
    // inputting a number
    scanf("%d", &n);
    

    // finding factorial of n using increment operator
    for(i=1;i<=n;i++){
        fact *= i;
    }
    printf("factorial of %d using increment operator: %d\n", n, fact);

    
    // finding factorial of n using decrement operator
    fact = 1;
    for(i=n;i>=1;i--){
        fact *= i;
    }
    printf("factorial of %d using decrement operator: %d\n", n, fact);
    
    return 0;
}
