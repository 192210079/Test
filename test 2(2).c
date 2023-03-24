#include <stdio.h>

int main() {
    int m, n, p, i, j, k;
    printf("Enter the dimensions of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter the dimensions of matrix B: ");
    scanf("%d %d", &n, &p);
    int A[m][n], B[n][p], result[m][p];
    printf("Enter the elements of matrix A: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of matrix B: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // initialize the result matrix to zero
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            result[i][j] = 0;
        }
    }
    // multiply the matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // print the result matrix
    printf("The result matrix is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//output:  Enter the dimensions of matrix A: 2 2
Enter the dimensions of matrix B: 2 2
Enter the elements of matrix A: 1 1
2 2
Enter the elements of matrix B: 1 1
2 2
The result matrix is: 
3 3
6 6//
