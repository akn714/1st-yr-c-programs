// Task : WAP to check whether the entered number is prime or not

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    
    // inputting a number
    scanf("%d", &n);
    
    // checking for prime number
    bool isPrime = true;
    for(i=2;i<n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    
    // printing whether the number is prime or not
    if(isPrime){
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number\n", n);
    }
    
    return 0;
}
