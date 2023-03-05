// Task : WAP that checks whether the two numbers entered by the user are equal or not
#include <stdio.h>

int main() {
    int a, b;
    
    // inputting 2 numbers
    scanf("%d%d", &a, &b);
    
    // checking if the numbers are equal or not
    if(a==b){
        printf("both are same numbers\n");
    }
    else{
        printf("both are different numbers\n");
    }
    
    return 0;
}
