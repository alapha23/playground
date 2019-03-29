#include <stdio.h>

void print_bit_iter(unsigned int x, int n)
{
  /* implement here */
}

void print_bit_rec(unsigned int x, int n)
{
  /* implement here */
}

int main()
{
  unsigned int x;
  scanf("%u", &x);
  print_bit_iter(x, 32);
  print_bit_rec(x, 32);
  return 0;
}
