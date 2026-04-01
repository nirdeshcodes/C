#include <stdio.h>
int main()
{
  int n, a = 0, b = 1, c;

  printf("Enter the number of terms: ");
  if (scanf("%d", &n) != 1) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1;
  }

  if (n <= 0) {
    printf("Please enter a positive number of terms.\n");
    return 1;
  }

  printf("Fibonacci series up to %d term(s): ", n);
  for (int i = 1; i <= n; i++)
  {
    printf("%d", a);
    if (i < n) {
      printf(" ");
    }
    c = a + b;
    a = b;
    b = c;
  }

  printf("\n");
  return 0;
}


