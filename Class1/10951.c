// A+B -4
#include <stdio.h>

int main()
{
  int a, b;

  while (scanf("%d %d", &a, &b) != EOF) // EOF: End Of File(더 이상 읽을 파일이 없음을 나타내며 종료함)
  {
    printf("%d\n", a + b);
  }

  return 0;
}