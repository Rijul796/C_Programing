#include <stdio.h>
int main()
{

    int arr[] = {2, 1, 3, 7, 8, 6, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int b[n];
    int c[n];
    int d[n];
    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] % 2) == 0)
        {
            b[j] = arr[i];
            j++;
        }
        else
        {
            c[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    int j1 = 0;
    int k1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            d[i] = b[j1];
            j1++;
        }
        else
        {
            d[i] = c[k1];
            k1++;
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",d[i]);
    }
}