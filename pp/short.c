#include <stdio.h>

void print_bit_iter(short x, int n)
{
    int i = n - 1;
    for(;i >= 0; i--) {
        // starting from MSB
        short truncate = 0x1 << i;
        if((x & truncate) == 0)
            printf("0");
        else printf("1");
    }
    printf(" ");
}


void print_bit_rec(short x, int n)
{
    int i = n - 1;
    for(;i >= 0; i--) {
        // starting from MSB
        short truncate = 0x1 << i;
        if((x & truncate) == 0)
            printf("0");
        else printf("1");
    }
    printf("\n");
}

int main() {
    short x;
    scanf("%d", &x);

    print_bit_iter(x, 16);
    print_bit_rec(x, 16);

    return 0;
}
