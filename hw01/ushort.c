#include <stdio.h>

void print_bit_iter(unsigned short x, int n)
{
  /* implement here */
}

void print_bit_rec(unsigned short x, int n)
{
  /* implement here */
}

int main()
{
  unsigned short x;
  scanf("%u", &x);
  print_bit_iter(x, 16);
  print_bit_rec(x, 16);
  return 0;
}
