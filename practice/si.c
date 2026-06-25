#include <stdio.h>

int main() {
/*z → length modifier that tells printf the argument is of type size_t.
u → print it as an unsigned decimal integer.*/
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}

