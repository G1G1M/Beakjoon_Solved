// 문자와 문자열
#include <stdio.h>

int main()
{
  char s[1000];
  int n;

  scanf("%s", s);
  scanf("%d", &n);

  printf("%c\n", s[n - 1]); // index를 활용해서 문자로 출력

  return 0;
}