// Task : WAP to sort the elements of the array in ascending order using Bubble Sort Technique

#include <stdio.h>
#include <stdbool.h>

// function to identify if the array is sorted or not
bool isSorted(int n, int arr[]);

int main() {
  
    int n;
  
    printf("array size? ");
    scanf("%d", &n);
    
    int arr[n];
    int i;
    
    printf("enter elements of array : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    int temp;
    
    // sorting the array
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            // swaping the i(th) and i+1(th) element of the array
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        if(i==n-2){
            // if the array is not sorted yet then going through it again
            if(!isSorted(n, arr)){
                i = -1;
            }
        }
    }
    
    // printing the sorted array
    printf("the sorted array is : ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}


// function defination of isSorted() function
bool isSorted(int n, int arr[]){
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
