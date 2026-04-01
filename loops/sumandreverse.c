#include <stdio.h>
int main()
{
  int n, lastDigit;
  printf("Enter a number:");
  scanf("%d", &n);
  int sum = 0;
  int r = 0;
  while (n != 0)
  {
    lastDigit = n % 10;
    sum = sum + lastDigit;
    r = r * 10;
    r = r + lastDigit;
    n = n / 10;
  }
  printf("Sum of digits: %d\n", sum);
  printf("Reverse of the number: %d\n", r);
  return 0;
}