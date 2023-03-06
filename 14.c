// Task : WAP to print sumof even and odd numbers from 1 to n numbers

#include <stdio.h>

int main() {
    int n, evenSum=0, oddSum=0, i;
    
    // inputting a number
    scanf("%d", &n);

    // finding sum of even and odd numbers
    for(i=1;i<=n;i++){
        if(i%2==0){
            evenSum += i;
        }
        else{
            oddSum += i;
        }
    }
    
    // printing even and odd sum
    printf("even sum : %d\nodd sum : %d\n", evenSum, oddSum);
    
    return 0;
}
