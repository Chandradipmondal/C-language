#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;
    printf("the value of n is :\n");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        a[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d table is %d\n", n, a[i]);
    }

    return 0;
}