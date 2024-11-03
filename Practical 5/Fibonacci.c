#include <stdio.h>

void fib(int *a, int *b) {
    int temp = *a + *b;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a = 0, b = 1;
    printf("Fibonacci Series of %d:\n", n);
    printf("%d ", a);
    for (i = 1; i < n; i++) {
        printf("%d ", b);
        fib(&a, &b);
    }

    return 0;
}
