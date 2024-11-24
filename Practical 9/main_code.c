#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

int main() {
    char *filename = "magic_square.txt";
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Unable to open file %s\n", filename);
        return 1;
    }

    int n;
    fscanf(file, "%d", &n); // Read the size of the matrix

    // Dynamically allocate memory for the matrix
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    // Read the matrix from the file
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(file, "%d", &matrix[i][j]);
        }
    }

    fclose(file);

    // Check if the matrix is a magic square
    if (isMagicSquare(matrix, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is NOT a magic square.\n");
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
