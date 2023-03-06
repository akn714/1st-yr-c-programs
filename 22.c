// Task : WAP that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and prints them

#include <stdio.h>

int main() {
    int n, i;
    
    // inputting size of the array
    printf("size of array? ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n], sum[n];
    
    // inputting an elements of the array
    
    printf("enter elements of array 1 : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr1[i]);Q
    }
    
    printf("enter elements of array 2 : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr2[i]);
    }
    
    // finding the sum of elements in the array
    for(i=0;i<n;i++){
        sum[i] = arr1[i] + arr2[i];
    }
    
    // printing the array sum
    printf("sum of 2 arrays : ");
    for(i=0;i<n;i++){
        printf("%d ", sum[i]);
    }
    
    return 0;
}
