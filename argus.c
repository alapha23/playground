#include <stdio.h>

int foo(int a, int b)
{
	return a++;
}

void main()
{
	foo(1,2);
}
