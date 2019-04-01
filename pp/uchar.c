#include <stdio.h>

void print_bit_iter(unsigned char x, int n)
{
    int i = n - 1;
    for(;i >= 0; i--) {
        // starting from MSB
        unsigned char truncate = 0x1 << i;
        if((x & truncate) == 0)
            printf("0");
        else printf("1");
    }
    printf(" ");
}


void print_bit_rec(unsigned char x, int n)
{
    int i = n - 1;
    for(;i >= 0; i--) {
        // starting from MSB
        unsigned char truncate = 0x1 << i;
        if((x & truncate) == 0)
            printf("0");
        else printf("1");
    }
    printf("\n");
}

int main() {
    unsigned char x;
    scanf("%u", &x);
    print_bit_iter(x, 8);
    print_bit_rec(x, 8);
    return 0;
}
