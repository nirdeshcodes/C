#include <stdio.h>
int main()
{
  int n, lastDigit;
  printf("Enter a number:");
  scanf("%d", &n);
  int sum = 0;
  while (n != 0)
  {
    lastDigit = n % 10;
    if(n%2==0)
    sum = sum + lastDigit;
    n = n / 10;
  }
  printf("Sum of the digits are %d", sum);
  return 0;
}