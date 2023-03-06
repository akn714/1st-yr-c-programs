// Task : WAP to find the sum of digits of the entered number

#include <stdio.h>

int main() {
    int n, digSum=0;
    
    // inputting a number
    scanf("%d", &n);
    
    // finding the sum of digits of n
    while(n){
        digSum += n%10;
        n /= 10;
    }
    
    // printing the sum
    printf("sum of digits : %d\n", digSum);
    
    
    return 0;
}
