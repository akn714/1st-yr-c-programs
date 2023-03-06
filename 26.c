// Task : WAP to add and multiply two matrices of order nxn

#include <stdio.h>

int main() {
    int n, i, j, k;
    
    // inputtting the size of array
    printf("size of array? ");
    scanf("%d", &n);
    
    int mat1[n][n], mat2[n][n], sum[n][n], mult[n][n];
    
    // inputting matrix 1
    printf("enter 1st matrix :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    // inputting matrix 2
    printf("enter 2nd matrix :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    
    
    // adding and multiplying two matrices
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                sum[i][j] = mat1[i][j] + mat2[i][j];
                mult[k][i] += mat1[k][j] * mat2[j][i];
            }
        }
    }
    
    // printing addition of 2 matrices
    printf("addition of 2 matrices :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    // printing multiplication of 2 matrices
    printf("multiplication of 2 matrices :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
