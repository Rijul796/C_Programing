#include <stdio.h>
#include <string.h>

int main()
{
    int a[] = {1, 0, 3, -5, -7, 0, 1, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[count++] = a[i];
        }
    }

    for (int i = count; i < n; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}