//ICHEC Question1


// TODO: Complete the inclusion of necessary libraries
#include <stdio.h>
#include<math.h>

int main() {

//TODO: Complete variable declarations
    int n;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);

// TODO: Enter the number of data points  

    float x[n], y[n];
    printf("Enter the data points (x and y pairs):\n");
    

// TODO: Enter (xi, yi) values i=1, 2, ..., n
//       Note that C array indices start from 0
    for (int i = 0; i < n; i++) 
    {
        printf("x[%d]: ", i + 1);
        scanf("%f", &x[i]);
         printf("y[%d]: ", i + 1);
        scanf("%f", &y[i]);
    }
/*
TODO: Calculate alpha and beta formulas
      Use the pow() function for the calculation of power of 2 in the formula.
      Check and exit the code if the denominator for a is equal to zero.
*/
    float s_x = 0, s_y = 0, s_xy = 0, s_x_sq = 0;
    for (int i = 0; i < n; i++) {
        s_x += x[i];
        s_y += y[i];
        s_xy += x[i] * y[i];
        s_x_sq += pow(x[i], 2);
    }
    
// Calculating alpha and beta values using the calculated sum values

    float d = n * s_x_sq - pow(s_x, 2);
    if (d == 0) {
        printf("Error");
        return 1;
    }

    float alpha = (n * s_xy - s_x * s_y) / d;
    float beta = (s_y - alpha * s_x) / n;
    
//TODO: Print the equation of the line 
    
    printf("The best-fitting line is: y = %.2fx + %.2f\n", alpha, beta);

    return 0;
}