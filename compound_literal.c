#include <stdio.h>
int sum(int a[], int j)
{
int i;

int s = 0;
for (i = 0; i < j; i++)
s += a[i];

return s;
}

int main(void)
{
int s;

s = sum((int []){1,2,3,4,5}, 5);
printf("Sum = %d\n", s);

return 0;
}

