#include <stdlib.h>

char strong = 87;
int weak_i;
char weak_c;

int main(void)
{

	strong =2<<64;
	printf("weak_i = %d\n", weak_i);
	return 0;
}
