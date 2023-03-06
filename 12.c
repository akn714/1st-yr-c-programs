// Task : WAP to print the sum of all numbers up to a given number

#include <stdio.h>

int main() {
    int n, sum=0, i;
    
    // inputting a number
    scanf("%d", &n);
    
    // finding sum up to n
    for(i=1;i<=n;i++){
        sum += i;
    }
    
    // printing the sum
    printf("sum up to %d : %d", n, sum);
    
    return 0;
}
