#include <stdio.h>

void print_bit_iter(unsigned long x, int n)
{
  /* implement here */
}

void print_bit_rec(unsigned long x, int n)
{
  /* implement here */
}

int main()
{
  unsigned long x;
  scanf("%lu", &x);
  print_bit_iter(x, 64);
  print_bit_rec(x, 64);
  return 0;
}
