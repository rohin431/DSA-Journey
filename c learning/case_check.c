#include <stdio.h>

int main()
{
    char a;
    printf("Enter any character of your choice: ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf("Upper case");
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("Lower case");
    }
    else
    {
        printf("The input is not an alphabet");
    }

    return 0;
}

