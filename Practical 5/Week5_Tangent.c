#include <stdio.h>
#include <math.h>

double func1(double x, double delta) {
    double r = 0.0, term = x;
    int n = 0;

    while (fabs(term) > delta) {
        r += term;
        n++;
        term = pow(x, 2 * n + 1) / (2 * n + 1);
    }

    return r;
}

double func2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

int main() {
    double delta, x;
    printf("Enter the precision (delta): ");
    scanf("%lf", &delta);

    double r1[181], r2[181];
    int h = 0;
    for (x = -0.9; x <= 0.9; x += 0.01) {
        r1[h] = func1(x, delta);
        r2[h] = func2(x);
        h++;
    }

    printf("Comparison of methods:\n");
    for (int i = 0; i < 181; i++) {
        printf("x = %.2f, func1 = %.10f, func2 = %.10f\n", -0.9 + i * 0.01, r1[i], r2[i]);
    }

    return 0;
}
