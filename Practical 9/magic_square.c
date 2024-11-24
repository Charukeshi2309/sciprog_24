#include "magic_square.h"
#include <stdbool.h>
#include <stdlib.h>

bool isMagicSquare(int **matrix, int n) {
    int sumDiag1 = 0, sumDiag2 = 0;

    // Calculate the sum of the two diagonals
    for (int i = 0; i < n; i++) {
        sumDiag1 += matrix[i][i];
        sumDiag2 += matrix[i][n - i - 1];
    }

    if (sumDiag1 != sumDiag2) {
        return false;
    }

    // Check sums of rows and columns
    for (int i = 0; i < n; i++) {
        int sumRow = 0, sumCol = 0;

        for (int j = 0; j < n; j++) {
            sumRow += matrix[i][j];
            sumCol += matrix[j][i];
        }

        if (sumRow != sumDiag1 || sumCol != sumDiag1) {
            return false;
        }
    }

    return true;
}
