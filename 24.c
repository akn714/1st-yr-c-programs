// Task : WAP to search an element in an array using Linear Search

#include <stdio.h>
#include <stdbool.h>

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
    
    printf("which element do you want to find : ");
    int toFind;
    scanf("%d", &toFind);
    
    bool isFound = false;
    for(i=0;i<n;i++){
        if(toFind==arr[i]){
            isFound = true;
            break;
        }
    }
    
    if(isFound){
        printf("%d found on index %d\n", toFind, i);
    }
    else{
        printf("%d doesn't exist in the given array!\n", toFind);
    }

    return 0;
}
