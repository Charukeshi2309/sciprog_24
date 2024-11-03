//ICHEC ASSIGNMENT -1 Question-2

#include <stdio.h>
#include<math.h>

/*
TODO: Write function declaration 
      for the calculation of the determinant of 3x3 matrix
*/
float getdet(float minor[3][3]);

int main(void) {

//TODO: Complete variable declarations
   float hmat[4][4], minor[3][3];
   float det = 0.0;

//TODO: Initialise Hilbert matrix and print
    printf("Hilbert Matrix:\n");
        for (int x = 0; x < 4; x++) {
            for (int y = 0; y < 4; y++) {
                hmat[x][y] = 1.0 / (x + y + 1);  
                printf("%.4f ", hmat[x][y]);     
            }
            printf("\n");
        }

//TODO: Find determinant of 4x4 Hilbert matrix using Cramer rule
    for (int column = 0; column < 4; column++) {
        for (int m = 1; m < 4; m++) {
            int minor_column = 0;
            for (int n = 0; n < 4; n++) {
                if (n == column) continue;  
                minor[m - 1][minor_column] = hmat[m][n];
                minor_column++;
            }
        }

        float value = (column % 2 == 0 ? 1 : -1) * hmat[0][column] * getdet(minor);
        det += value;
    }

//TODO: Print calculated determinant
    printf("Determinant of the 4x4 Hilbert matrix: %.9f\n", det);

    return 0;
}

//TODO: Complete function definition to get determinant  
float getdet(float minor[3][3]) {
    float a = minor[0][0], b = minor[0][1], c = minor[0][2];
    float d = minor[1][0], e = minor[1][1], f = minor[1][2];
    float g = minor[2][0], h = minor[2][1], i = minor[2][2];
    return a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
}