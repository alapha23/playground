#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	const int var = 0x1;

	int *pVar = (int *)&var;

	*pVar = 0x2;
	printf("var = %x\r\n", var);

	return 0;

}
