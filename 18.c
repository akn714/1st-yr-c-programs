// Task : WAP to find the reverse of a number

#include <stdio.h>

int main() {
    int n, rev=0;
    
    // inputting a number
    scanf("%d", &n);
    
    // finding the reverse
    while(n){
        rev = rev*10 + n%10;
        n /= 10;
    }
    
    // printing the reverse or n
    printf("reverse : %d", rev);
    
    return 0;
}
