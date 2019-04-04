#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//static char I_map[30] = {'Y', 'Z', 'A', 'B', 'C'}

char r_shf(char a) {
    if(a <= 'X') {
        return a + 2;
    } else
        return 'A' + (1 + a - 'Z');
}

char l_shf(char a) {
    if(a >= 'C') {
        return a - 2;
    } else
        return 'Z' - (1 - a + 'A');
}



int main(void) {
    int N = 0;
    char *str_ = (char*)calloc((size_t)1025, sizeof(char)); // N-length ciphertext means N chars + 1 null
    scanf("%d %s", &N, str_);

    char *str = (char *)calloc((size_t)(N + 1), sizeof(char));
    char result[N+1];
    int i = 0;

    memcpy(str, str_, (N+1)*sizeof(char));   // remove use of mem provisioned str_
    memcpy(result, str, (N)*sizeof(char));   // 
    free(str_);

    for(; i < N; i++) {
        if(result[i]%2 == 0) { // even, decrypting by right shift 2
            result[i] = r_shf(result[i]);
        } else {  // odd, decrypting by left shift 2
            result[i] = l_shf(result[i]);
        }
    } 
    printf("%s\n", result);
    return 0;   
}
