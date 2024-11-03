#include <stdio.h>


#define N 5
#define P 3
#define Q 4


void matmult(double A[N][P], double B[P][Q], double C[N][Q]);

int main() {
    // Declare matrices A, B, and C
    double A[N][P], B[P][Q], C[N][Q];

    // Initialize matrix A with A[i][j] = i + j
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            A[i][j] = i + j;
        }
    }

    // Initialize matrix B with B[i][j] = i - j
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            B[i][j] = i - j;
        }
    }

    // Call matmult to calculate C = A * B
    matmult(A, B, C);

    // Printing matrix A
    printf("Matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    // Printing matrix B
    printf("\nMatrix B:\n");
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }

    // Printing matrix C
    printf("\nMatrix C (Result of A * B):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++) {
            printf("%.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
