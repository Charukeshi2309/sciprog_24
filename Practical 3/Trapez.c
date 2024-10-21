//***WEEK-3 PRACTICAL-3 ICHECH-SCIENTIFIC PROGRAMMING***


#include <stdio.h>
#include <math.h>

int main() 
{
    
    double x = 0.0;
    double y = M_PI / 3.0;  

    int N = 12;
    double h = (y - x) / (N - 1);  

    
    double sum = 0.0;

    sum += tan(x) + tan(y);

    for (int i = 1; i < N - 1; i++) {
        double x_i = x + i * h;
        sum += 2 * tan(x_i);
    }

    double integral = (y - x) / (2.0 * (N - 1)) * sum;

   
    printf("Approximated integral: %.6f\n", integral);
    printf("Actual value: %.6f\n", log(2.0));
    printf("Difference: %.6f\n", fabs(integral - log(2.0)));

    return 0;
}
