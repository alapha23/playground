#include <stdio.h>

void print_bit_iter(int x, int n)
{
    int i = n - 1;
    for(;i >= 0; i--) {
        // starting from MSB
        int truncate = 0x1 << i;
        if((x & truncate) == 0)
            printf("0");
        else printf("1");
    }
    printf(" ");
}

void print_bit_rec(int x, int n)
{
    int i = n - 1;
    for(;i >= 0; i--) {
        // starting from MSB
        int truncate = 0x1 << i;
        if((x & truncate) == 0)
            printf("0");
        else printf("1");
    }
    printf("\n");
}

int main() {
    int x;
    scanf("%d", &x);
    print_bit_iter(x, 32);
    print_bit_rec(x, 32);
    return 0;
}
