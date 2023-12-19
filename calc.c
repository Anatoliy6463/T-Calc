#include <stdio.h>
void calculate(int a, int b, int c, int in, int a2)
{
  if (in == '+') c = a + b;
  if (in == '-') c = a - b;
  if (in == 'x' || in == '*') c = a * b;
  if (in == '/') c = a / b;
  if (in == '^')
  {
    a2 = a;
    for (int i = 1; i < b; i++)
      a2 = a * a;
    c = a2;
  }
}
int main()
{
  int a, b, c = 0;
  int a2, in;
  in = getchar();
  calculate(a, b, c, in, a2);
  printf("%d %c %d = %d", a, in, b, c);
  return (0);
}
