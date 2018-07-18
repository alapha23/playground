#include <stdio.h>

int addInt(int n, int m)
{return n+m;}

int main(){
	int (*functionPtr)(int, int);
	functionPtr = &addInt;
	int sum = (&addInt)(2, 3);
	printf("%d\n", sum);
	return 0;
} 
