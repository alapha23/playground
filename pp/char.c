#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int input;
    int i = 7;
    int two = 2;

    scanf("%d", &input);
    while(two) {
        for(;i >= 0; i--) {
            // starting from MSB
            char truncate = 0x1 << i;
            if((input & truncate) == 0)
                printf("0");
            else printf("1");
        }
        printf(" ");
        i = 7;
        two--;
    }
    printf("\n");
    return 0;
}
