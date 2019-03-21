#include <stdio.h>

int main(void) {

	char input = getchar();
	printf("%c \n", input ^ ' ');
	printf("%x \n", input ^ ' ');
}
