// Task : WAP to find the greatest of three numbers
#include <stdio.h>

int main() {
    int a, b, c;
    
    // inputting 3 numbers
    scanf("%d %d %d", &a, &b, &c);
    
    // finding the greatest number among the 3
    // method 1
    if(a>b){
        if(a>c){
            printf("%d is the greatest\n", a);
        }
        else{
            printf("%d is the greatest\n", c);
        }
    }
    else{
        if(b>c){
            printf("%d is the greatest\n", b);
        }
        else{
            printf("%d is the greatest\n", c);
        }
    }
    
    // method 2
    int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d is the greatest\n", max);
    
    return 0;
}
