#include <stdio.h>
int main()
{
  int n, original;

  printf("Enter any number:");
  scanf("%d", &n);
  original = n;
  int sum = 0, r = 0;
  while (n > 0)
  {
    r = r * 10;
    r = r + (n % 10);
    n = n / 10;
  }
  sum = r + original;
  printf("sum of reversed number and given number is = %d", sum);
  return 0;
}