#include <stdio.h>
void abcd(int *arr, int n);
void abcd(int *arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    abcd(arr, 8);
    return 0;
} 