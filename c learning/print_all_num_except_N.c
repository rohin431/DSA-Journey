#include <stdio.h>
int main()
{
    int n;
    printf("enter the number you donot want to print");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++)
    {
        if (i == n)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}