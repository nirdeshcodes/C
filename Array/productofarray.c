#include <stdio.h>
int main()
{
  int arr[4] = {1, 2, 3, 4};
  int product = 1;
  for (int i = 0; i < 4; i++)
  {
    product = product * arr[i];
  }
  printf("%d\n", product);

  return 0;
}