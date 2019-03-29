#include <stdio.h>

void print_bit_iter(long x, int n)
{
  /* implement here */
}

void print_bit_rec(long x, int n)
{
  /* implement here */
}

int main()
{
  long x;
  scanf("%ld", &x);
  print_bit_iter(x, 64);
  print_bit_rec(x, 64);
  return 0;
}
