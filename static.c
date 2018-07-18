#include <stdio.h>

	static int a;
void foo(void)
{
	++a;
	printf("%d\n", a);
}
int main(void)
{
	foo();
	foo();
	foo();
}
