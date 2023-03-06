// Task : WAP to find the minimum and maximum element of the array

#include <stdio.h>

int main() {
    int n, i;
    
    // inputtting the size of array
    printf("size of array? ");
    scanf("%d", &n);
    
    int arr[n];
    // inputting the array elements
    printf("enter elements of the array : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    // finding smallest and largest element in array
    int min = arr[0], max = arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
    }
    
    // printing the smallest and largest element
    printf("smallest element : %d\nlargest element : %d\n", min, max);

    return 0;
}
