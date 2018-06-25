#include <stdio.h>
int dcc(){int k=1;k++;k--;}
int main(void)
{
	int a,b=10;
	int c[20];

	while(b)
	{b--;}

	__asm__("mov $10, %eax;");
	a = dcc();
	printf("%d\n", a);
}
