#include <stdio.h>
int func(int n)
{
    int sum = 0;
    while ((n / 10) != 0)
    {
        sum += n % 10;
        func(n / 10);
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int sum = func(n);
    printf("%d",sum);
    return 0;
}