#include <stdio.h>

int main() {
    int M, N, i, j;
    printf("Enter the dimensions of the matrices: ");
    scanf("%d %d", &M, &N);
    int A[M][N], B[M][N], C[M][N];
    printf("Enter the elements of matrix A: ");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of matrix B: ");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // add the matrices
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    // print the result matrix
    printf("The result matrix is: \n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//output: Enter the dimensions of the matrices: 2 3
Enter the elements of matrix A: 1 2 3
4 5 6
Enter the elements of matrix B: 6 5 4
3 2 1
The result matrix is: 
7 7 7
7 7 7//
