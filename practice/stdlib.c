#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;
    if (x < y)
        return 1;
    if (x > y)
        return -1;

    return 0;
}
int main()
{
    int arr[] = {45, 10, 25, 47, 6};
    printf("array before sorting :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    qsort(arr, 5, sizeof(int), cmpfunc);
    printf("array after sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}