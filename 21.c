// Task : WAP that simply takes elements of the array from the user and finds the sum of these elements

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // inputting size of the array
    printf("size of array? ");
    scanf("%d", &n);
    
    // inputting an elements of the array
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    // finding the sum of elements in the array
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    
    printf("sum of elements of the array : %d\n", sum);
    
    return 0;
}
