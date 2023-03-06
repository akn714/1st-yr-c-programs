// Task : WAP that finds the sum of diagonal elements of a mxn matrix

#include <stdio.h>

int main() {
    int n, m, i, j, sum = 0;
    
    // inputtting the order of the matrix
    printf("enter order of matrix? ");
    scanf("%d%d", &n, &m);
    
    int mat[n][m];
    
    // inputting the matrix
    printf("enter matrix :\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    // finding the sum of diagonal elements of matrix
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j){
                sum += mat[i][i];
            }
        }
    }
    
    printf("sum of diagonal elements of the matrix : %d\n", sum);

    return 0;
}
