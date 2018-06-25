#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <assert.h>

int multiply(int a, char *b)
{
	assert(b!=NULL);
	int bb = atoi(b);
	int result;
	if(bb == 0)
	{
	// check correctness of b
		if(*b != 48)
		{
			fprintf(stderr, "expected integer, got a %s\n", b);
			fflush(stderr);
			exit(0);
		}
	}

	if(strlen(b) > 32)
	{
	// check overflow of b
		fprintf(stderr, "integer b = %s, overflowing\n", b);
		fflush(stderr);
		exit(0);
	}
	result = bb * a;
	if(result / a != bb)
	{
	// check overflow of result
		fprintf(stderr, "integer b = %s * a = %d, overflowing\n", b, result);
		fflush(stderr);
		exit(0);
	}
	return bb * a;
}

int main(void)
{
	char *b = "12a";
	int a = 4;
	int result;

	result = multiply(a, b);
	printf("result=%d\n", result);
	return 0;
}
