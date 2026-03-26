#include <stdio.h>

int main() {
    int a, d, n;

    printf("Enter first term (a): ");
    if (scanf("%d", &a) != 1) return 1;

    printf("Enter common difference (d): ");
    if (scanf("%d", &d) != 1) return 1;

    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of terms\n");
        return 1;
    }

    printf("Arithmetic progression (first %d terms):\n", n);
    for (int i = 0; i < n; i++) {
        int term = a + i * d;
        printf("%d ", term);
    }
    printf("\n");

    int nth = a + (n - 1) * d;
    printf("%dth term = %d\n", n, nth);
    return 0;
}
