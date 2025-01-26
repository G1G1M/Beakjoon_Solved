// X보다 작은 수
#include <stdio.h>

int main()
{
  int n, x;
  scanf("%d %d", &n, &x);

  for (int i = 1; i < n + 1; i++)
  {
    int k;
    scanf("%d", &k);
    if (k < x)
    {
      printf("%d ", k);
    }
  }
  printf("\n");

  return 0;
}