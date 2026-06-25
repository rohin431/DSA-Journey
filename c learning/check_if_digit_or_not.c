#include <stdio.h>

int main() {
    char a;
    printf("Enter any input: ");
    scanf("%c", &a);

    int b = (a >= '0' && a <= '9');
    printf("%d\n", b);

    return 0;
}
