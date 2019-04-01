#include <stdio.h>

void print_bit_iter(long x, int n)
{
    int i = n - 1;
    for(;i >= 0; i--) {
        // starting from MSB
        long truncate =  0x1L << i;
        if((x & truncate) == 0)
            printf("0");
        else {printf("1"); }
    }
    printf(" ");
}

void print_bit_rec(long x, int n)
{
    int i = n - 1;
    for(;i >= 0; i--) {
        // starting from MSB
        long truncate = 0x1L << i;
        if((x & truncate) == 0)
            printf("0");
        else printf("1");
    }
    printf("\n");
}

int main() {
    long x;
    scanf("%ld", &x);
    print_bit_iter(x, 64);
    print_bit_rec(x, 64);
    return 0;
}
