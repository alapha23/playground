#include <stdio.h>

//#define DEBUG__

int catalan(int N) {
    int result = 0;
    if (1 >= N) {
        return 1;
    } else {
        int i = 0;
        for(; i <= N-1; i++) {
#ifdef DEBUG__
            printf("C%d * C%d + ", i, N-1-i);
#endif
            result += catalan(i) * catalan(N - 1 - i);
        }
    }
    return result;
}

int main(void) {
    int N = 0;
    scanf("%d", &N);

    printf("%d\n", catalan(N));
    return 0;
}
