// Task : WAP that takes two operands and one operator from the user, perform the operation, and prints the result by using Switch statement

#include <stdio.h>

int main() {
    int n, m;
    char optr;
    scanf("%d %c %d", &n, &optr, &m);
    
    switch(optr){
        case '+':
            printf("%d %c %d = %d\n", n, optr, m, n+m);
            break;
        case '-':
            printf("%d %c %d = %d\n", n, optr, m, n-m);
            break;
        case '*':
            printf("%d %c %d = %d\n", n, optr, m, n*m);
            break;
        case '/':
            printf("%d %c %d = %.2f\n", n, optr, m, (float) n/m);
            break;
        case '%':
            printf("%d %c %d = %d\n", n, optr, m, n%m);
            break;
        default:
            printf(" invalid operator\n");
            break;
    }

    return 0;
}
