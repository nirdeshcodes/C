#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  // 1-2+3-4+5.................n terms
  int sum = 0;
  
    if (n % 2 == 0)
      sum = -n/2;
    else
      sum = -n/2 +n;
  
  printf("Sum of the series is: %d\n", sum);
  return 0;
}