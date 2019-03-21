#include <stdio.h>

int main(void) {
	signed int a = 0;
	signed int b = 1;
	signed int c = -1;

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("\n+- are equalivant in precedence, and higher compared with shifting\n");
	printf("b+c<<1 = %d means \'<<\' has lower precedence\n", b+c<<1);

	printf("\n&& || are equalivant while has lower precedent than +- and shifting\n");
	printf("c + b && b = %d proves && is lower than +-\n", c+b && b);
        printf("c << b && b = %d while c << (b && b) = %d \n", c << b && b), c << (b&b);

	printf("\n=> <= has lower precedence than +- but higher than shifting\n");
	printf("b + c <= a = %d while b + (c <= a) = %d\n", b + c <= a, b + (c <= a));
	printf("b >> c <= a = %d while b >> (c <= a) = %d\n", b>>c<=a, b>>(c<=a));

	printf("\nRegarding &, |, they have higher precedence than +-\n");
	printf("a + c & b = %d while a + (c & b) = %d", a+c&b, a+(c&b));

	printf("\n\t\t\t&& ||\n	\
		<< >>\n	\
		>= <=\n \
		+  - \n	\
		&, | \n \
		*  / \n");
}
