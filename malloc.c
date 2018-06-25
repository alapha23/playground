#include <stdlib.h>

int main(void)
{
	char *ptr1 = malloc(2);
	char *ptr2 = malloc(2<<10);

	free(ptr1);
	free(ptr2);
	return 0;
}
