// Task : WAP to print Armstrong numbers from 1 to n

#include <stdio.h>
#include <math.h>

// function to find number of digits in a number
int digitsIn(int n){
    int digits=0;
    if(n==0){
        return 1;
    }
    while(n){
        digits++;
        n /= 10;
    }
    return digits;
}

int main() {
    int n, i, j, m, sum, digits;
    
    // inputting a number
    scanf("%d", &n);
    
    // printing armstrong numbers
    printf("all armstrong numbers from 0 to %d are :\n", n);
    for(i=0;i<n;i++){
        m = i, sum = 0;
        digits = digitsIn(i);
        while(m){
            j = m%10;
            sum += pow(j, digits);
            m /= 10;
        }
        if(sum==i){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
