#include <stdio.h>

void print_bit_iter(unsigned char x, int n)
{
  /* implement here */
}

void print_bit_rec(unsigned char x, int n)
{
  /* implement here */
}

int main()
{
  unsigned char x;
  scanf("%u", &x);
  print_bit_iter(x, 8);
  print_bit_rec(x, 8);
  return 0;
}
