// A+B -5
#include <stdio.h>

int main()
{
  int a, b;

  while (1)
  {
    scanf("%d %d", &a, &b);
    if (a == 0 || b == 0)
    {
      break; // 중단하고 루프를 나감
    }
    printf("%d\n", a + b);
  }

  return 0;
}