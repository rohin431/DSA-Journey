#include <stdio.h>
int main()
{
    float a, b, c;
    printf("enter any 3 numbers of your choice");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("the average of the numbers =%f", (a + b + c) / 3);
    return 0;
}