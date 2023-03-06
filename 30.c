// Task : WAP to swap two elements using the concept of pointers

#include <stdio.h>

// function declatation to swap 2 numbers using pointers
void swap(int *n, int *m);

int main() {
    int n, m;
    
    // inputtting 2 numbers
    scanf("%d%d", &n, &m);
    
    printf("n : %d   m : %d [ before swaping ]\n", n, m);
    
    // calling the swap() function
    swap(&n, &m);
    
    printf("n : %d   m : %d [ after swaping ]\n", n, m);

    return 0;
}

// function defination
void swap(int *n, int *m){
    int temp = *n;
    *n = *m;
    *m = temp;
}
