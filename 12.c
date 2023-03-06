// Task : WAP to print the sum of all numbers up to a given number

#include <stdio.h>

int main() {
    int n, sum=0, i;
    
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        sum += i;
    }
    
    printf("sum up to %d : %d", n, sum);
    
    return 0;
}
