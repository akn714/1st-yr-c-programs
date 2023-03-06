// Task : WAP that finds whether a given number is even or odd

#include <stdio.h>

int main() {
    int n;
    
    // inputting a number
    scanf("%d", &n);
    
    // checking if the number is even or odd
    if(n%2==0){
        printf("the number is even\n");
    }
    else{
        printf("the number is odd\n");
    }
    
    return 0;
}
